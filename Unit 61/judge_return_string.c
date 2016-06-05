#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*________________________________________






________________________________________*/

int main()
{
    char *name;

    name = getName();

    printf("%s\n", name);

    free(name);

    return 0;
}
