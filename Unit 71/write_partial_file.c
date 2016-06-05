#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // fopen, fseek, rewind, fread, fclose 함수가 선언된 헤더 파일
#include <string.h>    // strlen, memset 함수가 선언된 헤더 파일

int main()
{
    char *s1 = "abcd";
    char buffer[20] = { 0, };

    FILE *fp = fopen("hello.txt", "r+");    // hello.txt 파일을 읽기/쓰기 모드(r+)로 열기.
                                            // 파일 포인터를 반환

    fseek(fp, 3, SEEK_SET);           // 파일 포인터를 파일 처음에서 3바이트만큼 순방향으로 이동시킴
    fwrite(s1, strlen(s1), 1, fp);    // 문자열 길이만큼 문자열을 파일에 저장

    rewind(fp);                  // 파일 포인터를 파일의 맨 처음으로 이동시킴
    fread(buffer, 20, 1, fp);    // 20바이트만큼 읽음

    printf("%s\n", buffer);      // Helabcdworld!

    fclose(fp);    // 파일 포인터 닫기

    return 0;
}
