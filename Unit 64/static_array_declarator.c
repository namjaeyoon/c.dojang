#include <stdio.h>

void printArray(int arr[static 5], int count)    // 배열 요소의 최소 개수를 5개로 지정
{
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    int numArr1[5] = { 1, 2, 3, 4, 5 };

    // 요소 개수가 5개이므로 OK
    printArray(numArr1, sizeof(numArr1) / sizeof(int));

    int numArr2[3] = { 1, 2, 3 };

    // 요소 개수가 3개이므로 경고
    printArray(numArr2, sizeof(numArr1) / sizeof(int));

    return 0;
}
