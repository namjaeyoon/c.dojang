#include <stdio.h>

int main()
{
    int num1 = 27;

    printf("%d\n", num1 /*(1)*/ 10);
    printf("%d\n", num1 != 5);

    printf("%d\n", num1 >= 27);
    printf("%d\n", num1 /*(2)*/ 27);

    printf("%d\n", num1 /*(3)*/ 30);
    printf("%d\n", num1 <= 27);

    return 0;
}
