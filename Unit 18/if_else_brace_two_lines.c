#include <stdio.h>

int main()
{
    int num1 = 10;

    if (num1 == 10)
    {    // if로 실행할 코드가 두 줄 이상이라면 중괄호로 묶어줌
        printf("if 조건문\n");
        printf("10입니다.\n");
    }
    else
    {    // else로 실행할 코드가 두 줄 이상이라면 중괄호로 묶어줌
        printf("else\n");
        printf("10이 아닙니다.\n");
    }

    return 0;
}
