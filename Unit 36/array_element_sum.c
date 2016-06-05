#include <stdio.h>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };    // 크기가 10인 int형 배열
    int sum = 0;    // 합을 저장할 변수는 0으로 초기화

    for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)    // 배열의 요소 개수만큼 반복
    {
        sum += numArr[i];    // sum과 배열의 요소를 더해서 다시 sum에 저장
    }

    printf("%d\n", sum);    // 605

    return 0;
}
