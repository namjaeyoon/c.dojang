#include <stdio.h>

int add(int a, int b)    // 반환값 자료형은 int, int형 매개변수 두 개 지정
{
    return a + b;    // 매개변수 a와 b를 더한 결과를 반환
}

int main()
{
    int num1;

    num1 = add(10, 20);     // 함수를 호출할 때 10과 20을 전달. 10과 20을 더한 값인 30이 반환됨

    printf("%d\n", num1);   // 30

    return 0;
}
