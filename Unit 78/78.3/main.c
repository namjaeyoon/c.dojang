#include <stdio.h>

extern int num1;    // 다른 소스 파일(외부)에 있는 전역 변수 num1을 사용

int main()
{
    printf("%d\n", num1);    // 전역 변수 num1의 값 출력

    return 0;
}
