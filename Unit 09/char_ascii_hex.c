#include <stdio.h>

int main()
{
    char c1 = 0x61;    // a의 ASCII 코드값 0x61 할당
    char c2 = 0x62;    // b의 ASCII 코드값 0x62 할당

    // char를 %c로 출력하면 문자가 출력되고, %d로 출력하면 정수 값이 출력됨
    // %x로 출력하면 16진수로 출력됨
    printf("%c, %d, 0x%x\n", c1, c1, c1);    // a, 97, 0x61
    printf("%c, %d, 0x%x\n", c2, c2, c2);    // b, 98, 0x62

    return 0;
}
