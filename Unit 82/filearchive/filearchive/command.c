#define _CRT_SECURE_NO_WARNINGS    // fopen, strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // 파일 처리 함수가 선언된 헤더 파일
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <stdint.h>    // 크기별로 정수 자료형이 정의된 헤더 파일
#include <string.h>    // strcpy, strcmp, memset 함수가 선언된 헤더 파일
#include "archive.h"
#include "file.h"

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

    PFILE_NODE node = archive->fileList.next;    // 첫 번째 노드
    if (node == NULL)    // 아카이브 파일에 파일이 하나도 없으면
    {
        // 아카이브 헤더 바로 다음으로 파일 포인터를 이동시킴
        fseek(archive->fp, sizeof(ARCHIVE_HEADER), SEEK_SET);

        // 새로 추가될 파일 데이터의 시작 위치는
        // 현재 파일 포인터의 위치에 파일 정보 크기만큼 순방향으로 이동시킨 값
        desc->dataOffset = ftell(archive->fp) + sizeof(FILE_DESC);
    }
    else    // 연결 리스트에서 첫 번째 노드가 가장 마지막에 추가된 파일
    {
        // 마지막에 추가된 파일의 파일 데이터 위치에서 파일 크기만큼 순방향으로 이동
        fseek(archive->fp, node->desc.dataOffset + node->desc.size, SEEK_SET);

        // 새로 추가될 파일 데이터의 시작 위치는 
        // 마지막에 추가된 파일의 파일 데이터 위치에서 
        // 파일 크기, 파일 정보 크기만큼 순방향으로 이동시킨 값
        desc->dataOffset = node->desc.dataOffset + node->desc.size + sizeof(FILE_DESC);
    }

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
