#include <stdio.h>

extern void printNumber();    // 다른 소스 파일(외부)에 있는 함수 printNumber를 사용

int main()
{
    printNumber();    // printNumber 호출

    return 0;
}
