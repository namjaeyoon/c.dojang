#include <stdio.h>

int main()
{
    int num1 = 30;

    if (num1 == 10)        // num1이 10일 때
        printf("10입니다.\n");
    else if (num1 == 20)   // num1이 20일 때
        printf("20입니다.\n");
    else                   // 앞의 조건식에 모두 만족하지 않을 때
        printf("10도 20도 아닙니다.\n");

    return 0;
}
