#include <stdio.h>

void swapElement(int arr[], int first, int second)    // 배열의 포인터와 인덱스를 받음
{
    int temp;

    temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}

int main()
{
    int numArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    swapElement(numArr, 0, 1);    // 배열과 값을 서로 바꿀 인덱스를 넣음

    printf("%d %d\n", numArr[0], numArr[1]); // 2 1: swapElement에 의해서 배열 요소의 값이 서로 바뀜

    return 0;
}
