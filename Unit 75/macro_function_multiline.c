#include <stdio.h>

// printf 세 줄을 PRINT_NUM3으로 정의
#define PRINT_NUM3(x) printf("%d\n", x); \
                      printf("%d\n", x + 1); \
                      printf("%d\n", x + 2);

int main()
{
    PRINT_NUM3(10);    // 10
                       // 11
                       // 12

    PRINT_NUM3(20);    // 20
                       // 21
                       // 22

    return 0;
}
