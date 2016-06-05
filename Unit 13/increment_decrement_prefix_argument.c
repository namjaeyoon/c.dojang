#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 2;

    printf("%d %d\n", ++num1, --num2);   // 3 1: 증감 연산자가 먼저 동작한 뒤 num1, num2의 값을 출력
    printf("%d %d\n", num1, num2);       // 3 1: 앞과 같은 값이 출력됨

    return 0;
}
