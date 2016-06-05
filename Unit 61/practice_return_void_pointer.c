#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *allocMemory()
{
    /*____________________*/

    return ptr;
}

int main()
{
    char *s1;

    s1 = allocMemory();
    strcpy(s1, "Uranus");
    printf("%s\n", s1);
    free(s1);

    return 0;
}
