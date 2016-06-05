#include <stdio.h>

int main()
{
    int num1 = 1;
    int num2 = 0;
    int num3;

    num3 = num1 / num2;    // 1을 0으로 나눔. 실행 에러 발생

    printf("%d\n", num3);

    return 0;
}
