#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    uint64_t *numPtr1 = malloc(sizeof(uint64_t));
    void *ptr;

    *numPtr1 = 12;

    ptr = numPtr1;

    printf("%llu\n", /*___________ptr*/);

    free(numPtr1);

    return 0;
}
