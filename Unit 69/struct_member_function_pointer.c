#include <stdio.h>

struct Calc {
    int (*fp)(int, int);    // 함수 포인터를 구조체 멤버로 지정
};

int add(int a, int b)    // int형 반환값, int형 매개변수 두 개
{
    return a + b;
}

int main()
{
    struct Calc c;

    c.fp = add;    // add 함수의 메모리 주소를 구조체 c의 멤버에 저장

    printf("%d\n", c.fp(10, 20));    // 30: 구조체 멤버로 add 함수 호출

    return 0;
}
