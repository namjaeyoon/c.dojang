#include <stdio.h>

int main()
{
    int num1 = 1;
    int num2 = 0;

    printf("%s\n", num1 && num2 ? "참" : "거짓");    // 거짓: 삼항 연산자에서 AND 연산자 사용
    printf("%s\n", num1 || num2 ? "참" : "거짓");    // 참: 삼항 연산자에서 OR 연산자 사용

    return 0;
}
