#include <stdio.h>

int main()
{
    int num1 = 1;
    int num2 = 2;
    int num3;

    num3 = (num1 << 2) + (num2 << 1);    // +º¸´Ù << ¿¬»êÀ» ¸ÕÀúÇÏ±â À§ÇØ °ıÈ£·Î ¹­¾îÁÜ

    printf("%d\n", num3);    // 8

    return 0;
}
