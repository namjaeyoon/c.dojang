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

    printf("%d\n", *(++numPtrB));    // 44: numPtrA에서 순방향으로 4바이트만큼 떨어진 
                                     // 메모리 주소에 접근
    printf("%d\n", *(--numPtrC));    // 22: numPtrA에서 역방향으로 4바이트만큼 떨어진 
                                     // 메모리 주소에 접근

    return 0;
}
