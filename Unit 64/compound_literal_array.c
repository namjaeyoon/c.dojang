#include <stdio.h>

void printArray(int arr[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    // 복합 리터럴 방식으로 배열을 넘겨줌
    printArray((int[]) { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, 10);

    return 0;
}
