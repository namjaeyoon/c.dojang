#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // fopen, feof, fread, fclose 함수가 선언된 헤더 파일
#include <string.h>    // strlen, memset 함수가 선언된 헤더 파일

int main()
{
    char buffer[5] = { 0, };    // 문자열 데이터 4바이트 NULL 1바이트. 4 + 1 = 5
    int count = 0;
    int total = 0;

    FILE *fp = fopen("hello.txt", "r");    // hello.txt 파일을 읽기 모드(r)로 열기.
                                           // 파일 포인터를 반환

    while (feof(fp) == 0)    // 파일 포인터가 파일의 끝이 아닐 때 계속 반복
    {
        count = fread(buffer, sizeof(char), 4, fp);    // 1바이트씩 4번(4바이트) 읽기
        printf("%s", buffer);                          // 읽은 내용 출력
        memset(buffer, 0, 5);                          // 버퍼를 0으로 초기화
        total += count;                                // 읽은 크기 누적
    }

    printf("\ntotal: %d\n", total);    // total: 13: 파일을 읽은 전체 크기 출력

    fclose(fp);    // 파일 포인터 닫기

    return 0;
}
