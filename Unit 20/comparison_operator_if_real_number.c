#include <stdio.h>

int main()
{
    float num1 = 0.1f;
    char c1 = 'a';

    if (num1 >= 0.09f)   // num1이 실수 0.09보다 크거나 같은지 검사
        printf("0.09보다 크거나 같습니다.\n");

    if (c1 == 'a')       // c1이 문자 a와 같은지 검사
        printf("a입니다.\n");

    if (c1 == 97)        // c1이 정수 97과 같은지 검사
        printf("97입니다.\n");

    if (c1 < 'b')        // c1이 문자 b보다 작은지 검사
        printf("b보다 작습니다.\n");

    return 0;
}
