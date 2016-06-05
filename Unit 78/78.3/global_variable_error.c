#include <stdio.h>

int main()
{
    printf("%d\n", num1);    // 컴파일 에러. 변수를 찾을 수 없음

    return 0;
}

int num1 = 10;    // 전역 변수를 함수 아래에 선언
