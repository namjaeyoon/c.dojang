#include <stdio.h>

void increaseNumber()
{
    int num1 = 0;    // 변수 선언 및 값 초기화

    printf("%d\n", num1);    // 변수 num1의 값을 출력

    num1++;    // 변수의 값을 1씩 증가
}

int main()
{
    increaseNumber();    // 0
    increaseNumber();    // 0
    increaseNumber();    // 0
    increaseNumber();    // 0: 변수가 매번 생성되고 사라지므로 0이 출력됨

    return 0;
}
