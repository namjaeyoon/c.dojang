#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int numArr1[3] = { 0, };
    long long numArr2[3] = { 0, };
    int *numPtr = malloc(sizeof(int) * 3);
    void *ptr = malloc(sizeof(long long) * 3);
    int num1;
    long long num2;

    scanf("%d %d %d %lld %lld %lld", &numArr1[0], &numArr1[1], &numArr1[2], &numArr2[0], &numArr2[1], &numArr2[2]);

    memcpy(numPtr, numArr1, sizeof(int) * 3);
    memcpy(ptr, numArr2, sizeof(long long) * 3);
    numArr1[0] = numArr1[1] = numArr1[2] = 0;
    numArr2[0] = numArr2[1] = numArr2[2] = 0;

    /*_____________________________
    _____________________________*/

    printf("%d %lld\n", num1, num2);

    free(ptr);
    free(numPtr);

    return 0;
}
