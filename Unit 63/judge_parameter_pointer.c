#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*_______________________________________________________



_______________________________________________________*/

int main()
{
    int num1;
    int num2;
    int quotient;     // ¸ò
    int remainder;    // ³ª¸ÓÁö

    scanf("%d %d", &num1, &num2);

    quotient = getQuotientAndRemainder(num1, num2, &remainder);

    printf("%d %d\n", quotient, remainder);

    return 0;
}
