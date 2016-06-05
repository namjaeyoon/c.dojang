#include <stdio.h>
#include <stdlib.h>

union Data {
    short num1;
    int num2;
};

int main()
{
    /*__________________________________________


    __________________________________________*/

    printf("0x%x 0x%x\n", d1->num1, d1->num2);

    free(d1);

    return 0;
}
