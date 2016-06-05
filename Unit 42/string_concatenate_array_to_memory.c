#define _CRT_SECURE_NO_WARNINGS    // strcpy, strcat 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcpy, strcat 함수가 선언된 헤더 파일
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    char s1[10] = "world";                   // 크기가 10인 char형 배열을 선언하고 문자열 할당
    char *s2 = malloc(sizeof(char) * 20);    // char 20개 크기만큼 동적 메모리 할당

    strcpy(s2, "Hello");    // s2에 Hello 문자열 복사

    strcat(s2, s1);         // s2 뒤에 s1을 붙임

    printf("%s\n", s2);     // Helloworld

    free(s2);    // 동적 메모리 해제

    return 0;
}
