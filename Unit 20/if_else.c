#include <stdio.h>

int main()
{
    int num1 = 5;
    int num2;

    if (num1)          // num1이 참이면 
        num2 = 100;    // num2에 100을 할당
    else               // num1이 거짓이면
        num2 = 200;    // num2에 200을 할당

    printf("%d\n", num2);    // 100: num1이 5이므로 참. num2에는 100이 할당됨

    return 0;
}
