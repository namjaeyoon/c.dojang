#include <stdio.h>

int main()
{
    unsigned char num1 = 131;    //  131: 1000 0011
    char num2 = -125;            // -125: 1000 0011

    unsigned char num3;
    char num4;

    num3 = num1 >> 5;    // num1의 비트 값을 오른쪽으로 5번 이동
    num4 = num2 >> 5;    // num2의 비트 값을 오른쪽으로 5번 이동

    printf("%u\n", num3);    //  4: 0000 0100: 맨 뒤의 11은 사라지고 0000 0100이 됨
    printf("%d\n", num4);    // -4: 1111 1100: 모자라는 공간은 부호 비트의 값인 1로 채워지므로 
                             // 1111 1100이 됨

    return 0;
}
