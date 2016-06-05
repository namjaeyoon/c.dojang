#include <stdio.h>

void printNumber();    // 함수 원형을 선언하여 다른 소스 파일(외부)에 있는 함수 printNumber를 사용

int main()
{
    printNumber();    // printNumber 호출

    return 0;
}
