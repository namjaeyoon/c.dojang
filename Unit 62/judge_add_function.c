#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*_____________________________________


_____________________________________*/

int main()
{
    long long num1, num2;

    scanf("%lld %lld", &num1, &num2);

    printf("%lld\n", add(num1, num2));

    return 0;
}
