#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>    // fopen, fputs, fclose 함수가 선언된 헤더 파일

int main()
{
    FILE *fp = fopen("hello.txt", "w");    // hello.txt 파일을 쓰기 모드(w)로 열기.
                                           // 파일 포인터를 반환

    fputs("Hello, world!", fp);    // 파일에 문자열 저장

    fclose(fp);    // 파일 포인터 닫기

    return 0;
}
