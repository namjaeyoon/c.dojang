#include <stdio.h>
#include <stdlib.h>    // strtof 함수가 선언된 헤더 파일

int main()
{
    char *s1 = "35.283672 3.e5 9.281772 7.e-5";    // "35.283672 3.e5f 9.2817721 7.e-5f"는 문자열
    float num1;
    float num2;
    float num3;
    float num4;
    char *end;    // 이전 숫자의 끝 부분을 저장하기 위한 포인터

    num1 = strtof(s1, &end);     // 문자열을 실수로 변환
    num2 = strtof(end, &end);    // 문자열을 실수로 변환
    num3 = strtof(end, &end);    // 문자열을 실수로 변환
    num4 = strtof(end, NULL);    // 문자열을 실수로 변환

    printf("%f\n", num1);    // 35.283672
    printf("%e\n", num2);    // 3.000000e+05
    printf("%f\n", num3);    // 9.281772
    printf("%e\n", num4);    // 7.000000e-05

    return 0;
}
