#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getFileSize(FILE *fp)
{
    int size;
    int currPos = ftell(fp);

    fseek(/*(1)________*/);
    size = ftell(fp);

    fseek(fp, currPos, SEEK_SET);

    return size;
}

int main()
{
    char *buffer;
    int size;

    FILE *fp = fopen("hello.txt", "r");

    size = getFileSize(fp);
    buffer = malloc(/*(2)__*/);
    memset(/*(3)____________*/);

    fread(buffer, size, 1, fp);

    printf("%s\n", buffer);

    fclose(fp);

    free(buffer);

    return 0;
}
