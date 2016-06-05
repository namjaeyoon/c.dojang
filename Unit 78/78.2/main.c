#include <stdio.h>

int num1 = 10;    // 전역 변수 선언 및 값 초기화

void printGlobal()
{
    printf("%d\n", num1);    // 20: main 함수에서 저장한 값이 계속 유지됨
}

int main()
{
    printf("%d\n", num1);    // 10: main 함수에서 전역 변수 num1의 값 출력

    num1 = 20;    // 전역 변수 num1에 20 저장

    printGlobal();    // 20: printGlobal 함수에서 전역 변수 num1의 값 출력

    return 0;
}
