#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*_______________________________________








_______________________________________*/

int main()
{
    int numArr[10];

    scanf("%d %d %d %d %d %d %d %d %d %d", &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4], &numArr[5], &numArr[6], &numArr[7], &numArr[8], &numArr[9]);

    printReverse(numArr, sizeof(numArr) / sizeof(int));

    return 0;
}
