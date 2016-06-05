#include <stdio.h>

int main()
{
    float num1 = 1.0f;
    float num2 = 0.0f;
    float num3;

    num3 = num1 / num2;

    printf("%f\n", num3);    // inf: ¹«ÇÑ´ë

    return 0;
}
