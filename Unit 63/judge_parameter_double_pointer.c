#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*_________________________________________________________


*_________________________________________________________*/

int main()
{
    long long *numArr1;
    int *numArr2;

    allocArray(&numArr1, 10, sizeof(long long));
    allocArray(&numArr2, 3, sizeof(int));

    scanf("%lld %d", &numArr1[9], &numArr2[2]);
    printf("%lld %d\n", numArr1[9], numArr2[2]);

    free(numArr2);
    free(numArr1);

    return 0;
}
