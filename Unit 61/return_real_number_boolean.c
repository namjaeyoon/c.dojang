#include <stdio.h>
#include <stdbool.h>    // bool, true, false가 정의된 헤더 파일

float realNumber()    // 반환값이 float형인 realNumber 함수 정의
{
    return 1.234567f;    // 1.234567: float형을 반환
}

bool truth()    // 반환값이 bool형인 truth 함수 정의
{
    return true;    // true: bool형을 반환
}

int main()
{
    float num1;
    bool b1;

    num1 = realNumber();    // float형을 반환했으므로 float형 변수에 저장
    b1 = truth();           // bool형을 반환했으므로 bool형 변수에 저장

    printf("%f\n", num1);   // 1.234567
    printf("%d\n", b1);     // 1

    return 0;
}
