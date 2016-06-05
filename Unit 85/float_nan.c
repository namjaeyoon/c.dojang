#include <stdio.h>
#include <math.h>    // sqrt와 isnan이 정의 및 선언된 헤더 파일

int main()
{
    float num1;

    num1 = sqrt(-1.0f);    // -1의 제곱근은 실수로 표현할 수 없음

    if (isnan(num1))       // 숫자가 아닌 값인지 검사
        printf("nan\n");

    return 0;
}
