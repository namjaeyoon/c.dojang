#include <stdio.h>

int main()
{
    float num1 = 0.0f;
    float num2 = 0.1f;

    // 0.1을 10번 더함
    for (int i = 0; i < 10; i++)
    {
        num1 = num1 + num2;
    }

    printf("%.15f\n", num1);    // 1.000000119209290: 1.0이 나와야 하지만 반올림 오차 발생

    return 0;
}
