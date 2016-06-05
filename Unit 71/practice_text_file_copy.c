#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    int count;
    char buffer[5] = { 0, };

    FILE *src = fopen("hello.txt", "r");
    FILE *dest = fopen("hello2.txt", "w");

    while (feof(src) == 0)
    {
        /*(1)_____________________________________*/
        printf("%s", buffer);
        /*(2)_____________________________________*/
        memset(buffer, 0, 5);
    }

    fclose(dest);
    fclose(src);

    return 0;
}
