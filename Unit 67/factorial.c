#include <stdio.h>

int factorial(int n)
{
    if (n == 1)      // n이 1일 때
        return 1;    // 1을 반환하고 재귀호출을 끝냄

    return n * factorial(n - 1);    // n과 factorial 함수에 n - 1을 넣어서 반환된 값을 곱함
}

int main()
{
    printf("%d", factorial(5));

    return 0;
}
