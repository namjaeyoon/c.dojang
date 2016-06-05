#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>    // fopen, fwrite, fclose 함수가 선언된 헤더 파일

#pragma pack(push, 1)    // 1바이트 크기로 정렬
struct Data {
    short num1;    // 2바이트
    short num2;    // 2바이트
    short num3;    // 2바이트
    short num4;    // 2바이트
};
#pragma pack(pop)        // 정렬 설정을 이전 상태(기본값)로 되돌림

int main()
{
    struct Data d1;

    d1.num1 = 100;
    d1.num2 = 200;
    d1.num3 = 300;
    d1.num4 = 400;

    FILE *fp = fopen("data.bin", "wb");   // 파일을 쓰기/바이너리 모드(wb)로 열기

    fwrite(&d1, sizeof(d1), 1, fp);       // 구조체의 내용을 파일에 저장

    fclose(fp);    // 파일 포인터 닫기

    return 0;
}
