#include <stdio.h>

float onePointOne()    // 반환값이 float형인 onePointOne 함수 정의
{
    return 1.1f;    // 실수 1.1을 반환
}

int main()
{
    int num1;

    num1 = (int)onePointOne();    // onePointOne의 반환값을 int로 변환하여 저장

    printf("%d\n", num1);    // 1

    return 0;
}
