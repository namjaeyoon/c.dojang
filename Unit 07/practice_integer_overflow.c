#include <stdio.h>

int main()
{
    /*(1)________*/ num1 = 256;
    /*(2)________*/ num2 = 65536;
    /*(3)________*/ num3 = 9223372036854775808;

    printf("%u %u %lld\n", num1, num2, num3);

    return 0;
}
