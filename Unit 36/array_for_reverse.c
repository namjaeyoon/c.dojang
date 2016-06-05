#include <stdio.h>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 }; // 크기가 10인 int형 배열

    for (int i = sizeof(numArr) / sizeof(int) - 1; i >= 0; i--)   // 요소 개수 - 1부터 역순으로 반복
    {
        printf("%d\n", numArr[i]);    // 배열의 인덱스에 반복문의 변수 i를 지정
    }

    return 0;
}
