#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char text[30];
    int length;
    int n = 4;

    scanf("%s", text);

    length = strlen(text);
    if (/*(1)___*/)
    {
        printf("wrong\n");
    }
    else
    {
        for (int i = 0; i < /*(2)_________*/; i++)
        {
            for (int j = 0; /*(3)____________*/; j++)
                printf("%c", text[i + j]);

            printf("\n");
        }
    }

    return 0;
}
