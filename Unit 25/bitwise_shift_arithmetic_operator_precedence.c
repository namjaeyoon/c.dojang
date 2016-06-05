#include <stdio.h>

int main()
{
    int num1 = 1;
    int num2 = 2;
    int num3;

    num3 = num1 << 2 + num2 << 1;    // <<보다 +의 우선순위가 높음

    printf("%d\n", num3);    // 32

    return 0;
}
