#define _CRT_SECURE_NO_WARNINGS    // sprintf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>    // sprintf 함수가 선언된 헤더 파일

int main()
{
    char s1[10];       // 변환한 문자열을 저장할 배열
    int num1 = 283;    // 283은 정수

    sprintf(s1, "%d", num1);    // %d를 지정하여 정수를 문자열로 저장

    printf("%s\n", s1);         // 283

    return 0;
}
