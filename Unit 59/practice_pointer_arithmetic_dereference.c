#include <stdio.h>

int main()
{
    int numArr[5] = { 11, 22, 33, 44, 55 };
    int *numPtrA;
    void *ptr;

    numPtrA = &numArr[2];
    ptr = numArr;

    printf("%d\n", /*__numPtrA____*/);
    printf("%d\n", /*_______ptr___*/);

    return 0;
}
