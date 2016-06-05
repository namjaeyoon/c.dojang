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

    // num1: 0.100000001490116
    if (num1 == 1.0f)         // 반올림 오차가 발생하므로 실수는 ==로 비교하면 안됨
        printf("true\n");
    else
        printf("false\n");    // num1은 1.0이 아니므로 false 출력

    return 0;
}
