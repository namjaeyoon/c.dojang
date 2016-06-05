#ifndef ARCHIVE_H    // ARCHIVE_H가 정의되어 있지 않다면
#define ARCHIVE_H    // ARCHIVE_H 매크로정의

#include <stdio.h>     // 파일 처리 함수가 선언된 헤더 파일
#include <stdint.h>    // 크기별로 정수 자료형이 정의된 헤더 파일
#include <stdbool.h>   // bool, true, false가 정의된 헤더 파일

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

PARCHIVE initialize();                             // 초기화 함수
void finalize(PARCHIVE archive);                   // 종료 함수
bool isExist(PARCHIVE archive, char *filename);    // 아카이브에 특정 파일이 있는지 검사하는 함수

#endif               // #ifndef ARCHIVE_H 끝
