#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // fopen, fseek, fread, fclose 함수가 선언된 헤더 파일
#include <string.h>    // memset 함수가 선언된 헤더 파일

int main()
{
    char buffer[10] = { 0, };

    FILE *fp = fopen("hello.txt", "r");    // hello.txt 파일을 읽기 모드(r)로 열기.
                                           // 파일 포인터를 반환

    fseek(fp, 2, SEEK_SET);     // 파일 포인터를 파일 처음에서 2바이트만큼 순방향으로 이동시킴
    fread(buffer, 3, 1, fp);    // 3바이트만큼 읽음. 3바이트만큼 순방향으로 이동

    printf("%s\n", buffer);     // llo

    memset(buffer, 0, 10);      // 버퍼를 0으로 초기화

    fseek(fp, 3, SEEK_CUR);     // 파일 포인터를 현재 위치에서 3바이트만큼 순방향으로 이동시킴
    fread(buffer, 4, 1, fp);    // 4바이트만큼 읽음. 4바이트만큼 순방향으로 이동

    printf("%s\n", buffer);     // orld

    fclose(fp);    // 파일 포인터 닫기

    return 0;
}
