#include <stdio.h>

static int num1;    // 정적 변수는 초깃값을 지정하지 않으면 0이 들어감(전역 변수)

int main()
{
    static int num2;     // 정적 변수는 초깃값을 지정하지 않으면 0이 들어감(지역 변수)

    printf("%d\n", num1);    // 0
    printf("%d\n", num2);    // 0

    return 0;
}
