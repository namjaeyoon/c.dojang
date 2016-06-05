#include <stdio.h>

int add(int a, int b)    // int형 반환값, int형 매개변수 두 개
{
    return a + b;
}

void executer(int (*fp)(int, int))    // 함수 포인터를 매개변수로 지정
{
    printf("%d\n", fp(10, 20));    // 30: 매개변수로 함수 호출
}

int main()
{
    executer(add);    // executer를 호출할 때 add 함수의 메모리 주소를 전달

    return 0;
}
