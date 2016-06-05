#define _CRT_SECURE_NO_WARNINGS    // sprintf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>    // sprintf 함수가 선언된 헤더 파일

int main()
{
    char s1[10];                // 변환한 문자열을 저장할 배열
    float num1 = 38.972340f;    // 38.972340은 실수

    sprintf(s1, "%f", num1);    // %f를 지정하여 실수를 문자열로 저장

    printf("%s\n", s1);         // 38.972340

    return 0;
}
