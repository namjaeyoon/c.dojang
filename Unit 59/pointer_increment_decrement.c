#include <stdio.h>

int main()
{
    int numArr[5] = { 11, 22, 33, 44, 55 };
    int *numPtrA;
    int *numPtrB;
    int *numPtrC;

    numPtrA = &numArr[2];    // 배열 세 번째 요소의 주소를 포인터에 저장

    numPtrB = numPtrA;
    numPtrC = numPtrA;

    numPtrB++;    // 포인터 연산
    numPtrC--;    // 포인터 연산

    printf("%p\n", numPtrA);    // 00A3FC08: 메모리 주소. 컴퓨터마다, 실행할 때마다 달라짐
    printf("%p\n", numPtrB);    // 00A3FC0C: sizeof(int) * 1이므로 numPtrA에서 4가 증가함
    printf("%p\n", numPtrC);    // 00A3FC04: sizeof(int) * -1이므로 numPtrA에서 4가 감소함

    return 0;
}
