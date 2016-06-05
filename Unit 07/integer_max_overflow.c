#include <stdio.h>
#include <limits.h>    // 자료형의 최댓값과 최솟값이 정의된 헤더 파일

int main()
{
    char num1 = CHAR_MAX + 1;          // char의 최댓값보다 큰 수를 할당. 오버플로우 발생
    short num2 = SHRT_MAX + 1;         // short의 최댓값보다 큰 수를 할당. 오버플로우 발생
    int num3 = INT_MAX + 1;            // int의 최댓값보다 큰 수를 할당. 오버플로우 발생
    long long num4 = LLONG_MAX + 1;    // long long의 최댓값보다 큰 수를 할당. 오버플로우 발생

    // char, short, int는 %d로 출력하고 long long은 %lld로 출력
    // 부호 있는 정수에서 저장할 수 있는 범위를 넘어서면 최솟값부터 다시 시작
    printf("%d %d %d %lld\n", num1, num2, num3, num4);
    // -128 -32768 -2147483648 -9223372036854775808

    unsigned char num5 = UCHAR_MAX + 1;          // unsigned char의 최댓값보다 큰 수를 할당
                                                 // 오버플로우 발생

    unsigned short num6 = USHRT_MAX + 1;         // unsigned short의 최댓값보다 큰 수를 할당
                                                 // 오버플로우 발생

    unsigned int num7 = UINT_MAX + 1;            // unsigned int의 최댓값보다 큰 수를 할당
                                                 // 오버플로우 발생

    unsigned long long num8 = ULLONG_MAX + 1;    // unsigned long long의 최댓값보다 큰 수를 할당
                                                 // 오버플로우 발생

    // unsigned char, unsigned short, unsigned int는 %u로 출력하고
    // unsigned long long은 %llu로 출력
    // 부호 없는 정수에서 저장할 수 있는 범위를 넘어서면 최솟값 0부터 다시 시작
    printf("%u %u %u %llu\n", num5, num6, num7, num8); // 0 0 0 0

    return 0;
}
