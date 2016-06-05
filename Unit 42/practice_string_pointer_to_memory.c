#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *s1 = "The Little Prince";
    char *s2 = /*(1)___________________*/

    /*(2)________*/

    printf("%s\n", s2);

    free(s2);

    return 0;
}
