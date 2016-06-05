#include <stdio.h>
#include <limits.h>     // 자료형의 최댓값과 최솟값이 정의된 헤더 파일

int main()
{
    char num1 = CHAR_MIN - 1;          // char의 최솟값보다 작은 수를 할당. 언더플로우 발생
    short num2 = SHRT_MIN - 1;         // short의 최솟값보다 작은 수를 할당. 언더플로우 발생
    int num3 = INT_MIN - 1;            // int의 최솟값보다 작은 수를 할당. 언더플로우 발생
    long long num4 = LLONG_MIN - 1;    // long long의 최솟값보다 작은 수를 할당. 언더플로우 발생

    // char, short, int는 %d로 출력하고 long long은 %lld로 출력
    // 부호 있는 정수에서 최솟값보다 작아지면 최댓값부터 다시 시작
    printf("%d %d %d %lld\n", num1, num2, num3, num4);
    // 127 32767 2147483647 9223372036854775807

    unsigned char num5 = 0 - 1;         // unsigned char의 최솟값보다 작은 수를 할당
                                        // 언더플로우 발생

    unsigned short num6 = 0 - 1;        // unsigned short의 최솟값보다 작은 수를 할당
                                        // 언더플로우 발생

    unsigned int num7 = 0 - 1;          // unsigned int의 최솟값보다 작은 수를 할당
                                        // 언더플로우 발생

    unsigned long long num8 = 0 - 1;    // unsigned long long의 최솟값보다 작은 수를 할당
                                        // 언더플로우 발생

    // unsigned char, unsigned short, unsigned int는 %u로 출력하고
    // unsigned long long은 %llu로 출력
    // 부호 없는 정수에서 최솟값보다 작아지면 최댓값부터 다시 시작
    printf("%u %u %u %llu\n", num5, num6, num7, num8);
    // 255 65535 4294967295 18446744073709551615

    return 0;
}
