#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char c1, c2;
    int x, y;

    FILE *fp = /*(1)___________________*/;

    /*(2)_____________________________________*/

    printf("%d %d\n", x, y);

    fclose(fp);

    return 0;
}
