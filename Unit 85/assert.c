#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>    // assert가 정의된 헤더 파일

void copy(char *dest, char *src)
{
    assert(dest != NULL);    // dest이 NULL이면 프로그램 중단
    assert(src != NULL);     // src가 NULL이면 프로그램 중단

    strcpy(dest, src);       // 문자열 복사
}

int main()
{
    char s1[100];
    char *s2 = "Hello, world!";

    copy(s1, s2);     // 정상 동작

    copy(NULL, s2);   // NULL이 들어갔으므로 프로그램 중단
    // Assertion failed: dest != NULL, file c:\project\assert\assert\assert.c, line 8
    
    return 0;
}
