#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*(1)______________________________*/

    printf("문자열을 입력하세요: ");
    /*(2)_________*/

    printf("%s\n", s1);

    free(s1);

    return 0;
}
