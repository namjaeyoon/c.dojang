#include <stdio.h>

int *ten()    // int 포인터를 반환하는 ten 함수 정의
{
    int num1 = 10;   // num1은 함수 ten이 끝나면 사라짐

    return &num1;    // 함수에서 지역 변수의 주소를 반환하는 것은 잘못된 방법
}

int main()
{
    int *numPtr;

    numPtr = ten();    // 함수를 호출하고 반환값을 numPtr에 저장

    printf("%d\n", *numPtr);    // 10: 값이 나오긴 하지만 이미 사라진 변수를 출력하고 있음

    return 0;
}
