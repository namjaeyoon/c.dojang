#include <stdio.h>

// 매크로 안에서 변수를 선언할 수 있도록 do while 사용
// a와 b의 값을 서로 바꿈
#define SWAP(a, b, type) do { \
    type temp; \
    temp = a;  \
    a = b;     \
    b = temp;  \
} while (0)

int main()
{
    int num1 = 10;
    int num2 = 20;

    SWAP(num1, num2, int);            // 값을 바꿀 자료형으로 int를 지정
    printf("%d %d\n", num1, num2);    // 20 10: 두 변수의 값이 바뀜

    float num3 = 1.5f;
    float num4 = 3.8f;

    SWAP(num3, num4, float);          // 값을 바꿀 자료형으로 float를 지정
    printf("%f %f\n", num3, num4);    // 3.800000 1.500000: 두 변수의 값이 바뀜

    return 0;
}
