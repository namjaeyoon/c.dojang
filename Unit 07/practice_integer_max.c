#include <stdio.h>
/*(1)____________*/

int main()
{
    char num1 = CHAR_MAX;
    short num2 = /*(2)____*/;
    int num3 = INT_MAX;
    long num4 = LONG_MAX;
    long long num5 = /*(3)_____*/;

    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

    return 0;
}
