#include <stdio.h>

void setElement(int arr[])    // 배열의 포인터를 받음
{
    arr[2] = 300;    // 매개변수로 받은 배열의 요소를 변경
}

int main()
{
    int numArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    setElement(numArr);    // 배열을 넣어줌

    printf("%d\n", numArr[2]);    // 300: setElement에서 변경한 값이 출력됨

    return 0;
}
