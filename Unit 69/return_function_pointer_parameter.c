#include <stdio.h>

int add(int a, int b)    // int형 반환값, int형 매개변수 두 개
{
    return a + b;
}

int (*getAdd(int x, int y))(int, int)    // 함수 포인터 반환, int형 매개변수 두 개
{
    printf("%d %d\n", x, y);    // x, y는 getAdd 함수의 매개변수
    return add;
}

int main()
{
    printf("%d\n", getAdd(8, 9)(10, 20));    // 8, 9는 getAdd에 전달
                                             // 10, 20은 getAdd에서 반환된 add에 전달

    return 0;
}
