#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *s1 = " Wonderland";
    char *s2 = malloc(sizeof(char) * 30);

    /*(1)________________*/

    /*(2)________________*/

    printf("%s\n", s2);

    free(s2);

    return 0;
}
