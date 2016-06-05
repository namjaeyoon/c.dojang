#include <stdio.h>
#include <stdlib.h>    // strtol 함수가 선언된 헤더 파일

int main()
{
    char *s1 = "0xaf10 42 0x27C 9952";    // "0xaf10 42 0x27C 9952"는 문자열
    int num1;
    int num2;
    int num3;
    int num4;
    char *end;    // 이전 숫자의 끝 부분을 저장하기 위한 포인터

    num1 = strtol(s1, &end, 16);     // 16진법으로 표기된 문자열을 정수로 변환
    num2 = strtol(end, &end, 10);    // 10진법으로 표기된 문자열을 정수로 변환
    num3 = strtol(end, &end, 16);    // 16진법으로 표기된 문자열을 정수로 변환
    num4 = strtol(end, NULL, 10);    // 10진법으로 표기된 문자열을 정수로 변환

    printf("%x\n", num1);    // af10
    printf("%d\n", num2);    // 42
    printf("%X\n", num3);    // 27C
    printf("%d\n", num4);    // 9952

    return 0;
}
