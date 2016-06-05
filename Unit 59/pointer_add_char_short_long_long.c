#include <stdio.h>

int main()
{
    char *cPtr1 = NULL;
    short *numPtr1 = NULL;
    long long *numPtr2 = NULL;

    printf("%p\n", cPtr1 + 1);      // 00000001: 0x000000에서 1바이트만큼 순방향으로 이동
    printf("%p\n", numPtr1 + 1);    // 00000002: 0x000000에서 2바이트만큼 순방향으로 이동
    printf("%p\n", numPtr2 + 1);    // 00000008: 0x000000에서 8바이트만큼 순방향으로 이동

    return 0;
}
