#include <stdio.h>

int main()
{
    int num1;

    num1 = 5 == 5 < 10;    // ==보다 <의 우선순위가 높음

    printf("%d\n", num1);    // 0

    return 0;
}
