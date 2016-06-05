#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // fopen, fwrite, fclose 함수가 선언된 헤더 파일
#include <string.h>    // strcpy, memset 함수가 선언된 헤더 파일

#pragma pack(push, 1)    // 1바이트 크기로 정렬
struct Data {
    char c1;        // 1바이트
    short num1;     // 2바이트
    int num2;       // 4바이트
    char s1[20];    // 20바이트
};
#pragma pack(pop)        // 정렬 설정을 이전 상태(기본값)로 되돌림

int main()
{
    struct Data d1;
    memset(&d1, 0, sizeof(d1));    // 구조체 변수의 내용을 0으로 초기화

    d1.c1 = 'a';                       // 문자 저장
    d1.num1 = 32100;                   // 2바이트 크기의 숫자 저장
    d1.num2 = 2100000100;              // 4바이트 크기의 숫자 저장
    strcpy(d1.s1, "Hello, world!");    // 문자열 저장

    FILE *fp = fopen("data2.bin", "wb");   // 파일을 쓰기/바이너리 모드(wb)로 열기

    fwrite(&d1, sizeof(d1), 1, fp);        // 구조체의 내용을 파일에 저장

    fclose(fp);    // 파일 포인터 닫기

    return 0;
}
