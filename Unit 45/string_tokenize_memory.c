#define _CRT_SECURE_NO_WARNINGS    // strtok 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <stdlib.h>
#include <string.h>    // strtok 함수가 선언된 헤더 파일

int main()
{
    char *s1 = malloc(sizeof(char) * 30);    // char 30개 크기만큼 동적 메모리 할당

    strcpy(s1, "The Little Prince");   // s1에 문자열 복사

    char *ptr = strtok(s1, " ");       // 동적 메모리에 들어있는 문자열은 자를 수 있음

    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strtok(NULL, " ");
    }

    free(s1);    // 동적 메모리 해제

    return 0;
}
