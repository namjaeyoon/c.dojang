#include <stdio.h>

int one()    // 반환값이 int형인 one 함수 정의
{
    float a = 1.1f;

    return (int)a;    // a를 int로 변환하여 반환
}

int main()
{
    int num1;

    num1 = one();    // int형을 반환했으므로 int형 변수에 저장

    printf("%d\n", num1);    // 1

    return 0;
}
