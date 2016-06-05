#include <stdio.h>

int main()
{
    unsigned char num1 = 4;    // 4: 0000 0100
    unsigned char num2 = 4;    // 4: 0000 0100
    unsigned char num3 = 4;    // 4: 0000 0100
    unsigned char num4 = 4;    // 4: 0000 0100
    unsigned char num5 = 4;    // 4: 0000 0100

    num1 &= 5;     // 5(0000 0101) AND 연산 후 할당
    num2 |= 2;     // 2(0000 0010) OR 연산 후 할당
    num3 ^= 3;     // 3(0000 0011) XOR 연산 후 할당
    num4 <<= 2;    // 비트를 왼쪽으로 2번 이동한 후 할당
    num5 >>= 2;    // 비트를 오른쪽으로 2번 이동한 후 할당

    printf("%u\n", num1);    //  4: 0000 0100: 100과 101을 비트 AND하면 100이 됨
    printf("%u\n", num2);    //  6: 0000 0110: 100과 010을 비트 OR하면 110이 됨
    printf("%u\n", num3);    //  7: 0000 0111: 100과 011을 비트 XOR하면 111이 됨
    printf("%u\n", num4);    // 16: 0001 0000: 100을 왼쪽으로 2번 이동하면 10000이 됨
    printf("%u\n", num5);    //  1: 0000 0001: 100을 오른쪽으로 2번 이동하면 1이 됨

    return 0;
}
