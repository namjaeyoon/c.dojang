#include <stdio.h>

int main()
{
    printf("%d\n", 1 || 1);    // 1: 1 OR 1은 참
    printf("%d\n", 1 || 0);    // 1: 1 OR 0은 참
    printf("%d\n", 0 || 1);    // 1: 0 OR 1은 참
    printf("%d\n", 0 || 0);    // 0: 0 OR 0은 거짓

    printf("%d\n", 2 || 3);    // 1: 2 OR 3은 참

    return 0;
}
