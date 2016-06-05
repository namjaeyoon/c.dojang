#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int *numPtr1;
    int **numPtr2;
    int num1;

    scanf("%d", &num1);

    /*_________________
    _________________*/

    printf("%d\n", **numPtr2);

    return 0;
}
