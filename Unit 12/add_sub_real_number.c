#include <stdio.h>

int main()
{
    float num1;
    float num2;

    num1 = 1.0f + 0.456789f;    // 1.0에 0.456789를 더해서 num1에 저장
    num2 = 1.0f - 0.456789f;    // 1.0에서 0.456789를 빼서 num2에 저장

    printf("%f\n", num1);    // 1.456789
    printf("%f\n", num2);    // 0.543211

    return 0;
}
