#include <stdio.h>

// 덧셈 함수
int add(int a, int b)    // int형 반환값, int형 매개변수 두 개
{
    return a + b;
}

// 곱셈 함수
int mul(int a, int b)    // int형 반환값, int형 매개변수 두 개
{
    return a * b;
}

int main()
{
    int (*fp)(int, int);    // int형 반환값, int형 매개변수 두 개가 있는 함수 포인터 fp 선언

    fp = add;                      // add 함수의 메모리 주소를 함수 포인터 fp에 저장
    printf("%d\n", fp(10, 20));    // 30: 함수 포인터로 add 함수를 호출하여 합을 구함

    fp = mul;                      // mul 함수의 메모리 주소를 함수 포인터 fp에 저장
    printf("%d\n", fp(10, 20));    // 200: 함수 포인터로 mul 함수를 호출하여 곱을 구함

    return 0;
}
