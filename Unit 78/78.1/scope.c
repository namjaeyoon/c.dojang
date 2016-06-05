#include <stdio.h>

int main()
{
    int num1 = 10;    // main 함수 블록에 변수 선언

    {
        printf("%d\n", num1);    // 10: 현재 블록 바깥의 변수는 사용할 수 있음
    }

    return 0;
}
