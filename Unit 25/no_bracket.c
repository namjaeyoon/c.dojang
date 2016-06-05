#include <stdio.h>

int main()
{
    int num1;

    num1 = 35 + 1 * 2;    // 1 * 2가 먼저 계산되므로 35 + 2가 됨

    printf("%d\n", num1);    // 37

    return 0;
}
