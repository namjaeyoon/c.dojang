#include <stdio.h>

int main()
{
    printf("%d\n", !1);    // 0: NOT 1은 거짓
    printf("%d\n", !0);    // 1: NOT 0은 참

    printf("%d\n", !3);    // 0: NOT 3은 거짓

    return 0;
}
