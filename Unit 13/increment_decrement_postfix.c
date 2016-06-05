#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 2;
    int num3;
    int num4;

    num3 = num1++;    // num1의 값을 num3에 할당한 뒤 num1의 값을 1 증가시킴
    num4 = num2--;    // num2의 값을 num4에 할당한 뒤 num2의 값을 1 감소시킴

    printf("%d %d\n", num3, num4);    // 2 2

    return 0;
}
