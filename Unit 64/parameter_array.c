#include <stdio.h>

void printArray(int arr[], int count)    // 배열의 포인터와 요소의 개수를 받음
{
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    int numArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    printArray(numArr, sizeof(numArr) / sizeof(int));    // 배열과 요소의 개수를 넣음

    return 0;
}
