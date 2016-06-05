#include <stdio.h>

int main()
{
    unsigned char num1 = 162;    // 162: 1010 0010
    unsigned char num2;

    num2 = ~num1;

    printf("%u\n", num2);    // 93: 0101 1101: num1의 비트 값을 뒤집음

    return 0;
}
