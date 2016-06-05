#include <stdio.h>
#include <stdlib.h> // atof 함수가 선언된 헤더 파일

int main()
{
    char *s1 = "35.283672";  // "35.283672"은 문자열
    float num1;

    num1 = atof(s1);         // 문자열을 실수로 변환하여 num1에 할당

    printf("%f\n", num1);    // 35.283672

    return 0;
}
