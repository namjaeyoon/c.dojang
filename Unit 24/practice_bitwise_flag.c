#include <stdio.h>

int main()
{
    unsigned char flag1 = 1 << 7;
    unsigned char flag2 = 1 << 3;

    flag1 |= /*(1)__<<__*/;
    flag1 &= /*(2)__<<__*/;
    flag2 ^= /*(3)__<<__*/;

    printf("%u %u\n", flag1, flag2);

    return 0;
}
