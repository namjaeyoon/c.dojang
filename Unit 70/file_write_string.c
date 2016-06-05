#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // fopen, fwrite, fclose 함수가 선언된 헤더 파일
#include <string.h>    // strlen 함수가 선언된 헤더 파일

int main()
{
    char *s1 = "Hello, world!";

    FILE *fp = fopen("hello.txt", "w");    // hello.txt 파일을 쓰기 모드(w)로 열기.
                                           // 파일 포인터를 반환

    fwrite(s1, strlen(s1), 1, fp);    // strlen으로 문자열의 길이를 구함.
                                      // 문자열의 길이만큼 1번 파일에 저장

    fclose(fp);    // 파일 포인터 닫기

    return 0;
}
