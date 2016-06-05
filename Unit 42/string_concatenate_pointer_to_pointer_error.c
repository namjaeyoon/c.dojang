#define _CRT_SECURE_NO_WARNINGS    // strcat 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcat 함수가 선언된 헤더 파일

int main()
{
    char *s1 = "world";    // 문자열 포인터
    char *s2 = "Hello";    // 문자열 포인터

    strcat(s2, s1);    // 실행 에러

    printf("%s\n", s1);

    return 0;
}
