#include <stdio.h>
#include <stdlib.h>

union Data {
    short num1;
    int num2;
};

int main()
{
    /*________________________________________*/

    d1->num2 = 1;

    printf("%d %d\n", d1->num1, d1->num2);

    free(d1);

    return 0;
}
