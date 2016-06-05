#include <stdio.h>

int main()
{
    float num1 = 11.0f;
    float num2 = 5.0f;

    int num3 = num1 / num2;    // 실수에서 실수를 나누어 2.2가 나왔지만 
                               // 정수 자료형에는 2만 저장되고 0.2는 버려짐

    printf("%d\n", num3);    // 2

    return 0;
}
