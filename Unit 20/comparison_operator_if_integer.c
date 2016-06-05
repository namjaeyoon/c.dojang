#include <stdio.h>

int main()
{
    int num1 = 10;

    if (num1 == 10)    // num1이 10과 같은지 검사
        printf("10입니다.\n");

    if (num1 != 5)     // num1이 5와 다른지 검사
        printf("5가 아닙니다.\n");

    if (num1 > 10)     // num1이 10보다 큰지 검사
        printf("10보다 큽니다.\n");

    if (num1 < 10)     // num1이 10보다 작은지 검사
        printf("10보다 작습니다.\n");

    if (num1 >= 10)    // num1이 10보다 크거나 같은지 검사
        printf("10보다 크거나 같습니다.\n");

    if (num1 <= 10)    // num1이 10보다 작거나 같은지 검사
        printf("10보다 작거나 같습니다.\n");

    return 0;
}
