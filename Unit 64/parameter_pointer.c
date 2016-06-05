#include <stdio.h>

void printArray(int *arr, int count)    // 매개변수를 포인터로 지정하여 배열을 받음
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
