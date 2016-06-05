#include <stdio.h>

int main()
{
    {
        int num1 = 10;       // 블록 안에 변수를 선언
    }

    printf("%d\n", num1);    // 컴파일 에러. 블록 바깥에서는 num1을 사용할 수 없음

    return 0;
}
