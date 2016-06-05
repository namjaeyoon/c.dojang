#include <stdio.h>

int main()
{
    char num1 = 113;    //  113: 0111 0001
    char num2 = -15;    //  -15: 1111 0001
    char num3, num4, num5, num6;

    num3 = num1 << 2;    // num1의 비트 값을 왼쪽으로 2번 이동
    num4 = num2 << 2;    // num2의 비트 값을 왼쪽으로 2번 이동

    num5 = num1 << 4;    // num1의 비트 값을 왼쪽으로 4번 이동
    num6 = num2 << 4;    // num1의 비트 값을 왼쪽으로 4번 이동

    printf("%d\n", num3);    // -60: 1100 0100: 부호 비트를 덮어쓰게 되므로 양수에서 음수가 됨
    printf("%d\n", num4);    // -60: 1100 0100: 이미 음수인 수는 계속 음수가 됨

    printf("%d\n", num5);    // 16: 0001 0000: 이미 양수인 수는 계속 양수가 됨
    printf("%d\n", num6);    // 16: 0001 0000: 부호 비트를 덮어쓰게 되므로 음수에서 양수가 됨

    return 0;
}
