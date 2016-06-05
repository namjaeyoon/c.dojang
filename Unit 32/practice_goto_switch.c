#include <stdio.h>

int main()
{
    int num1 = 1;

    for (int i = 0; i < 10; i++)
    {
        switch (num1)
        {
        case 1:
            printf("1ÀÔ´Ï´Ù.\n");
            /*(1)___*/
        default:
            break;
        }
    }

/*(2)___*/
     return 0;
}
