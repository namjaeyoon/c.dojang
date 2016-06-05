#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numPtr1 = malloc(sizeof(int));
    short *numPtr2;

    *numPtr1 = 0x11223344;

    /*_______________________*/

    printf("0x%x\n", *numPtr2);

    free(numPtr1);

    return 0;
}
