#include <stdio.h>

// GCC의 -std=c99 또는 -std=c11 옵션에서는 extern inline을 붙임
// extern inline int add(int a, int b)
inline int add(int a, int b)    // 인라인 함수로 정의
{
    return a + b;
}

int main()
{
    int num1;

    num1 = add(10, 20);    // 인라인 함수 호출

    printf("%d\n", num1);  // 30

    return 0;
}
