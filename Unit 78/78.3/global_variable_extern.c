#include <stdio.h>

extern int num1;    // 변수가 선언되어 있다는 것을 미리 알려줌

int main()
{
    printf("%d\n", num1);    // 10

    return 0;
}

int num1 = 10;    // 전역 변수를 함수 아래에 선언
