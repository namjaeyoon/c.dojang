#include <stdio.h>

int main()
{
    unsigned char flag = 7;    // 7: 0000 0111

    flag &= ~2;    // 1111 1101, 마스크값 2의 비트를 뒤집은 뒤 비트 AND로 일곱 번째 비트를 끔

    printf("%u\n", flag);    // 5: 0000 0101

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

    return 0;
}
