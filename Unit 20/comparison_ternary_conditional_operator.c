#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2;

    num2 = num1 == 10 ? 100 : 200; // num1이 10이면 num2에 100을 할당, 10이 아니면 num2에 200을 할당

    printf("%d\n", num2);    // 100: num1이 10이므로 num2에는 100이 할당됨

    return 0;
}
