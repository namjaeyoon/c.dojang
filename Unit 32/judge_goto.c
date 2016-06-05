#include <stdio.h>

int main()
{
    int num1 = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (num1 == 10)
                goto /*__*/;

            num1++;
        }
    }

EXIT1:
    printf("100\n");

EXIT2:
    printf("200\n");

EXIT3:
    printf("300\n");

    return 0;
}
