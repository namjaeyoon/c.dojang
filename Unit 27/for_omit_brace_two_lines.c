#include <stdio.h>

int main()
{
    for (int i = 0; i < 100; i++)
        printf("for 반복문\n");       // 이 줄만 반복됨
        printf("Hello, world!\n");    // 이 줄은 한 번만 실행됨

    return 0;
}
