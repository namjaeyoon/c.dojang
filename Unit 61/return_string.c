#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

char *helloLiteral()    // char 포인터를 반환하는 helloLiteral 함수 정의
{
    char *s1 = "Hello, world!";

    return s1;    // 문자열 Hello, world!는 메모리에 저장되어 있으므로 사라지지 않음
                  // 문자열 포인터 리턴
}

char *helloDynamicMemory()    // char 포인터를 반환하는 helloDynamicMemory 함수 정의
{
    char *s1 = malloc(sizeof(char) * 20);    // char 20개 크기만큼 동적 메모리 할당

    strcpy(s1, "Hello, world!");    // Hello, world!를 s1에 복사

    return s1;    // 문자열 포인터 리턴
}

int main()
{
    char *s1;
    char *s2;

    s1 = helloLiteral();
    s2 = helloDynamicMemory();

    printf("%s\n", s1);    // Hello, world!
    printf("%s\n", s2);    // Hello, world!

    free(s2);    // 동적 메모리 해제

    return 0;
}
