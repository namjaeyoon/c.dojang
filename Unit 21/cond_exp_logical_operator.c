#include <stdio.h>

int main()
{
    int num1 = 20;
    int num2 = 10;
    int num3 = 30;
    int num4 = 15;

    printf("%d\n", num1 > num2 && num3 > num4);    // 1: 양쪽 모두 참이므로 참
    printf("%d\n", num1 > num2 && num3 < num4);    // 0: 앞만 참이므로 거짓

    printf("%d\n", num1 > num2 || num3 < num4);    // 1: 앞만 참이므로 참
    printf("%d\n", num1 < num2 || num3 < num4);    // 0: 양쪽 모두 거짓이므로 거짓

    printf("%d\n", !(num1 > num2));    // 0: 참의 NOT은 거짓

    return 0;
}
