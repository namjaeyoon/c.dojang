#include <stdio.h>

int main()
{
    long long num1 = 123456789000;
    int num2 = 10;

    // int보다 long long이 자료형 크기가 크므로 long long으로 변환됨
    printf("%lld\n", num1 + num2);    // 123456789010
    printf("%lld\n", num1 - num2);    // 123456788990
    printf("%lld\n", num1 * num2);    // 1234567890000
    printf("%lld\n", num1 / num2);    // 12345678900

    return 0;
}
