#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 2;
    int num3;
    int num4;

    num3 = ++num1;    // num1의 값을 1 증가시킨 뒤 num3에 할당
    num4 = --num2;    // num2의 값을 1 감소시킨 뒤 num4에 할당

    printf("%d %d\n", num3, num4);    // 3 1

    return 0;
}
