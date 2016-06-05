#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);

    if (num1 == 1)         // num1이 1이면
        printf("1입니다.\n");
    else if (num1 == 2)    // num1이 2이면
        printf("2입니다.\n");

    return 0;
}
