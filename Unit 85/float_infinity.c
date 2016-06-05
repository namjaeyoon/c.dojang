#include <stdio.h>
#include <float.h>    // 실수 자료형의 양수 최솟값, 최댓값이 정의된 헤더 파일
#include <math.h>     // 무한대 INFINITY가 정의된 헤더 파일

int main()
{
    float num1 = FLT_MAX;
    float num2;

    num1 = num1 * 1000.0f;   // float의 양수 최댓값에 1000을 곱하여 무한대가 됨

    if (num1 == INFINITY)    // INFINITY와 비교하여 값이 무한대인지 검사
        printf("infinity\n");

    if (isinf(num1))         // isinf를 사용하여 값이 무한대인지 검사
        printf("infinity\n");

    num2 = 0.0f;
    num1 = 1.0f / num2;      // 실수를 0으로 나누면 무한대

    if (isinf(num1))         // isinf를 사용하여 값이 무한대인지 검사
        printf("infinity\n");

    return 0;
}
