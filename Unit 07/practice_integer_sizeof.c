#include <stdio.h>

int main()
{
    /*(1)___*/ num1;
    /*(2)___*/ num2;

    printf("%d\n", sizeof(num1) + sizeof(num2) + sizeof(int));

    return 0;
}
