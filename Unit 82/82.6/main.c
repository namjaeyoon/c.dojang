#define _CRT_SECURE_NO_WARNINGS    // fopen, strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // 파일 처리 함수가 선언된 헤더 파일
#include <stdint.h>    // 크기별로 정수 자료형이 정의된 헤더 파일
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>    // strcpy, strcmp, memset 함수가 선언된 헤더 파일

#pragma pack(push, 1)    // 구조체를 1바이트 크기로 정렬

// 아카이브 파일에 저장되는 구조체
typedef struct _ARCHIVE_HEADER {    // 아카이브 헤더 구조체 정의
    uint16_t magic;                     // 아카이브 파일 매직 넘버
    uint16_t version;                   // 아카이브 파일 버전
} ARCHIVE_HEADER, *PARCHIVE_HEADER;

// 아카이브 파일에 저장되는 구조체
typedef struct _FILE_DESC {         // 파일 정보 구조체 정의
    char     name[256];                 // 파일 이름
    uint32_t size;                      // 파일 크기
    uint32_t dataOffset;                // 파일 데이터의 위치
} FILE_DESC, *PFILE_DESC;

#pragma pack(pop)

// 프로그램에서만 사용하는 구조체
typedef struct _FILE_NODE {         // 파일 목록 연결 리스트 구조체 정의
    struct _FILE_NODE *next;            // 다음 노드의 주소를 저장할 포인터
    FILE_DESC desc;                     // 파일 정보
} FILE_NODE, *PFILE_NODE;

// 프로그램에서만 사용하는 구조체
typedef struct _ARCHIVE {           // 아카이브 메인 구조체
    ARCHIVE_HEADER header;              // 아카이브 헤더
    FILE *fp;                           // 아카이브 파일 포인터
    FILE_NODE fileList;                 // 파일 목록 연결 리스트의 머리 노드
} ARCHIVE, *PARCHIVE;

#define ARCHIVE_NAME "archive.bin"   // 아카이브 파일 이름

uint32_t getFileSize(FILE *fp)    // 파일의 크기를 구하는 함수 정의
{
    uint32_t size;
    uint32_t currPos = ftell(fp);    // 현재 파일 포인터의 위치 저장

    // 파일의 끝으로 이동하여 파일 크기를 구함
    fseek(fp, 0, SEEK_END);
    size = ftell(fp);

    fseek(fp, currPos, SEEK_SET);    // 파일 포인터를 이전 위치로 되돌림

    return size;
}

int append(PARCHIVE archive, char *filename)    // 파일 추가 함수 정의
{
    int ret = 0;    // 함수가 성공했는지 실패했는지 반환값으로 표현

    // 추가할 파일 열기
    FILE *fp = fopen(filename, "rb");
    if (fp == NULL)
    {
        printf("%s 파일이 없습니다.\n", filename);
        return -1;    // 함수 종료. -1은 실패
    }

    uint8_t *buffer;
    uint32_t size;

    size = getFileSize(fp);    // 추가할 파일의 크기를 구함
    buffer = malloc(size);

    // 추가할 파일의 내용을 읽음
    if (fread(buffer, size, 1, fp) < 1)
    {
        printf("%s 파일 읽기 실패\n", filename);
        ret = -1;       // -1은 실패
        goto Error1;    // fp를 닫고 buffer를 해제하는 에러 처리로 이동
    }

    // 새 파일 정보 생성
    PFILE_DESC desc = malloc(sizeof(FILE_DESC));
    memset(desc, 0, sizeof(FILE_DESC));
    strcpy(desc->name, filename);    // 파일 정보 구조체에 추가할 파일의 이름 저장
    desc->size = size;               // 파일 정보 구조체에 추가할 파일의 크기 저장

    // 아카이브 헤더 바로 다음으로 파일 포인터를 이동시킴
    fseek(archive->fp, sizeof(ARCHIVE_HEADER), SEEK_SET);

    // 파일 데이터의 시작 위치는 현재 파일 포인터의 위치에 
    // 파일 정보 크기만큼 순방향으로 이동시킨 값
    desc->dataOffset = ftell(archive->fp) + sizeof(FILE_DESC);

    // 아카이브 파일에 새 파일 정보 쓰기
    if (fwrite(desc, sizeof(FILE_DESC), 1, archive->fp) < 1)
    {
        printf("파일 정보 쓰기 실패\n");
        ret = -1;
        goto Error2;    // fp를 닫고, desc와 buffer를 해제하는 에러 처리로 이동
    }

    // 아카이브 파일에 새 파일 데이터 쓰기
    if (fwrite(buffer, size, 1, archive->fp) < 1)
    {
        printf("파일 데이터 쓰기 실패\n");
        ret = -1;
        goto Error2;    // fp를 닫고, desc와 buffer를 해제하는 에러 처리로 이동
    }

    printf("%s 파일 추가 성공\n크기: %d\n", filename, size);

Error2:
    free(desc);      // 파일 정보 저장용 동적 메모리 해제

Error1:
    free(buffer);    // 파일 내용 저장용 동적 메모리 해제

    fclose(fp);      // 파일 포인터 닫기

    return ret;      // 성공이냐 실패냐에 따라 0 또는 -1을 반환
}

void list(PARCHIVE archive)    // 파일 목록 출력 함수 정의
{
    printf("파일 목록:\n");

    // 파일 목록 연결 리스트를 순회하면서 파일 이름 출력
    PFILE_NODE curr = archive->fileList.next;    // 첫 번째 노드
    while (curr != NULL)
    {
        printf("    %s\n", curr->desc.name);

        curr = curr->next;
    }
}

int extract(PARCHIVE archive, char *filename)    // 파일 추출 함수 정의
{
    // 파일 목록 연결 리스트를 순회
    PFILE_NODE curr = archive->fileList.next;    // 첫 번째 노드
    while (curr != NULL)
    {
        // 추출할 파일이 있는지 검사
        if (strcmp(curr->desc.name, filename) == 0)
        {
            int ret = 0;
            uint32_t size = curr->desc.size;
            uint8_t *buffer = malloc(size);

            // 파일 데이터가 있는 곳으로 파일 포인터를 이동시킴
            fseek(archive->fp, curr->desc.dataOffset, SEEK_SET);

            // 파일 데이터 읽기
            if (fread(buffer, size, 1, archive->fp) < 1)
            {
                printf("아카이브 파일 읽기 실패\n");
                ret = -1;       // -1은 실패
                goto Error1;    // buffer를 해제하는 에러 처리로 이동
            }

            // 추출한 파일을 저장할 새 파일 생성
            FILE *fp = fopen(filename, "wb");
            if (fp == NULL)
            {
                printf("%s 파일 열기 실패\n", filename);
                ret = -1;
                goto Error1;    // buffer를 해제하는 에러 처리로 이동
            }

            // 새로 생성된 파일에 파일 데이터 쓰기
            if (fwrite(buffer, size, 1, fp) < 1)
            {
                printf("%s 파일 쓰기 실패\n", filename);
                ret = -1;
                goto Error2;    // fp를 닫고, buffer를 해제하는 에러 처리로 이동
            }

            printf("%s 파일 추출 성공\n크기: %d\n", filename, size);

        Error2:
            fclose(fp);    // 파일 포인터 닫기

        Error1:
            free(buffer);    // 동적 메모리 해제

            return ret;      // 성공이냐 실패냐에 따라 0 또는 -1을 반환
        }

        curr = curr->next;
    }

    return -1;
}

int main()
{
    PARCHIVE archive = malloc(sizeof(ARCHIVE));
    memset(archive, 0, sizeof(ARCHIVE));

    PFILE_NODE curr;

    FILE *fp = fopen(ARCHIVE_NAME, "r+b");    // 아카이브 파일을 읽기/쓰기 모드로 열기
    if (fp == NULL)                           // 아카이브 파일이 없으면
    {
        fp = fopen(ARCHIVE_NAME, "w+b");      // 아카이브 파일을 생성
        if (fp == NULL)                       // 파일 생성(열기)에 실패하면
            return 0;                         // 프로그램 종료

        // 새 아카이브 헤더 생성
        archive->header.magic = 'AF';         // 매직 넘버 AF 저장(리틀 엔디언에서는 FA로 저장됨)
        archive->header.version = 1;          // 파일 버전 1 저장

        // 아카이브 파일에 아카이브 헤더 저장
        if (fwrite(&archive->header, sizeof(ARCHIVE_HEADER), 1, fp) < 1)
        {
            printf("아카이브 헤더 쓰기 실패\n");
            fclose(fp);
            return 0;
        }
    }
    else    // 아카이브 파일이 있으면
    {
        // 아카이브 파일에서 아카이브 헤더 읽기
        if (fread(&archive->header, sizeof(ARCHIVE_HEADER), 1, fp) < 1)
        {
            printf("아카이브 헤더 읽기 실패\n");
            fclose(fp);
            return 0;
        }
    }

    // 아카이브 파일 매직 넘버 검사
    if (archive->header.magic != 'AF')
    {
        printf("아카이브 파일이 아닙니다.\n");
        fclose(fp);
        return 0;
    }

    // 아카이브 파일 버전 검사
    if (archive->header.version != 1)
    {
        printf("버전이 맞지 않습니다.\n");
        fclose(fp);
        return 0;
    }

    archive->fp = fp;    // 아카이브 파일 포인터 저장

    int ret = 0;
    uint32_t size = getFileSize(fp);    // 아카이브 파일의 크기를 구함
    uint32_t currPos = ftell(fp);       // 현재 파일 포인터의 위치를 구함

    while (size > currPos)         // 파일 포인터의 위치가 파일 크기보다 작을 때 반복
    {
        PFILE_NODE node = malloc(sizeof(FILE_NODE));
        memset(node, 0, sizeof(FILE_NODE));

        // 파일 정보 읽기
        if (fread(&node->desc, sizeof(FILE_DESC), 1, fp) < 1)
        {
            printf("아카이브 파일 읽기 실패\n");
            free(node);       // 동적 메모리 해제
            ret = -1;         // -1은 실패
            goto FINALIZE;    // 모든 동적 메모리 해제 코드로 이동
        }

        // 연결 리스트에 파일 정보 노드(FILE_NODE) 추가
        node->next = archive->fileList.next;
        archive->fileList.next = node;

        // 현재 파일 포인터의 위치에 파일 크기를 더하여 다음 파일 정보 위치로 이동
        currPos = ftell(fp) + node->desc.size;
        fseek(fp, currPos, SEEK_SET);
    }

    extract(archive, "hello.txt");    // hello.txt 파일 추출

FINALIZE:
    // 파일 목록 연결 리스트를 순회하면서 메모리 해제
    curr = archive->fileList.next;    // 첫 번째 노드
    while (curr != NULL)
    {
        PFILE_NODE next = curr->next;
        free(curr);

        curr = next;
    }

    fclose(archive->fp);    // 아카이브 파일 포인터 닫기

    free(archive);    // 아카이브 메인 구조체 해제

    return ret;       // 성공이냐 실패냐에 따라 0 또는 -1을 반환
}
