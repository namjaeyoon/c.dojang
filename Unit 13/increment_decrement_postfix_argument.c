#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 2;

    printf("%d %d\n", num1++, num2--);    // 2 2: num1, num2의 값을 먼저 출력한 뒤 증감 연산자 동작
    printf("%d %d\n", num1, num2);        // 3 1: 증감 연산자가 동작한 결과

    return 0;
}
