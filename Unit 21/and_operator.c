#include <stdio.h>

int main()
{
    printf("%d\n", 1 && 1);    // 1: 1 AND 1은 참
    printf("%d\n", 1 && 0);    // 0: 1 AND 0은 거짓
    printf("%d\n", 0 && 1);    // 0: 0 AND 1은 거짓
    printf("%d\n", 0 && 0);    // 0: 0 AND 0은 거짓

    printf("%d\n", 2 && 3);    // 1: 2 AND 3은 참

    return 0;
}
