#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>    // fopen, fgets, fclose 함수가 선언된 헤더 파일

int main()
{
    char buffer[20];    // 파일을 읽을 때 사용할 임시 공간

    FILE *fp = fopen("hello.txt", "r");    // hello.txt 파일을 읽기 모드로 열기.
                                           // 파일 포인터를 반환

    fgets(buffer, sizeof(buffer), fp);     // hello.txt에서 문자열을 읽음

    printf("%s\n", buffer);    // Hello, world!: 파일의 내용 출력

    fclose(fp);    // 파일 포인터 닫기

    return 0;
}
