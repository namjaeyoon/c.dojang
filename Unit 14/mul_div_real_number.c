#include <stdio.h>

int main()
{
    float num1;
    float num2;

    num1 = 2.73f * 3.81f;    // 2.73에 3.81을 곱해서 num1에 저장
    num2 = 7.0f / 2.0f;      // 7.0에서 2.0을 나누어서 num2에 저장

    printf("%f\n", num1);    // 10.401299
    printf("%f\n", num2);    // 3.500000

    return 0;
}
