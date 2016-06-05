#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2 = 0;

    if (num1 /*(1)*/ num1)
        printf("Âü\n");
    else
        printf("°ÅÁş\n");

    if (num1 /*(2)*/ num2)
        printf("Âü\n");
    else
        printf("°ÅÁş\n");

    printf("%s\n", !/*(3)*/ ? "Âü" : "°ÅÁş");

    return 0;
}
