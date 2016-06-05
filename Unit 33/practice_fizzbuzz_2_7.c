#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (/*(1)_________________*/)
            printf("FizzBuzz\n");
        else if (/*(2)___*/)
            printf("Fizz\n");
        else if (/*(3)___*/)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }

    return 0;
}
