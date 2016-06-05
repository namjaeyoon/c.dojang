#include <stdio.h>

int main()
{
    unsigned char flag = 7;    // 7: 0000 0111

    flag ^= 2;    // 0000 0010 마스크와 비트 XOR로 일곱 번째 비트를 토글
    flag ^= 8;    // 0000 1000 마스크와 비트 XOR로 다섯 번째 비트를 토글

    printf("%u\n", flag);    // 13: 0000 1101

    if (flag & 1)    // & 연산자로 0000 0001 비트가 켜져 있는지 확인
        printf("0000 0001은 켜져 있음\n");
    else
        printf("0000 0001은 꺼져 있음\n");

    if (flag & 2)    // & 연산자로 0000 0010 비트가 켜져 있는지 확인
        printf("0000 0010은 켜져 있음\n");
    else
        printf("0000 0010은 꺼져 있음\n");

    if (flag & 4)    // & 연산자로 0000 0100 비트가 켜져 있는지 확인
        printf("0000 0100은 켜져 있음\n");
    else
        printf("0000 0100은 꺼져 있음\n");

    if (flag & 8)    // & 연산자로 0000 1000 비트가 켜져 있는지 확인
        printf("0000 1000은 켜져 있음\n");
    else
        printf("0000 1000은 꺼져 있음\n");

    return 0;
}
