#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>    // fopen, fread, fclose 함수가 선언된 헤더 파일

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

    FILE *fp = fopen("data2.bin", "rb");   // 파일을 읽기/바이너리 모드(rb)로 열기

    fread(&d1, sizeof(d1), 1, fp);         // 파일의 내용을 읽어서 구조체 변수에 저장

    printf("%c %d %d %s\n", d1.c1, d1.num1, d1.num2, d1.s1);    // a 32100 2100000100 Hello, world!

    fclose(fp);    // 파일 포인터 닫기

    return 0;
}
