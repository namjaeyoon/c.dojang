#include <stdio.h>

int num1 = 10;    // 전역 변수의 이름은 num1

int main()
{
    int num1 = 20;    // 지역 변수의 이름도 num1

    {
        int num1 = 30;           // 블록 안에 선언된 지역 변수의 이름도 num1
        printf("%d\n", num1);    // 30: 현재 블록의 변수를 사용
    }

    printf("%d\n", num1);    // 20: 현재 블록의 변수를 사용

    return 0;
}
