#include <stdio.h>

static void print()    // main.c에서 print을 정적 함수로 정의
{
    printf("main.c\n");
}

int main()
{
    print();

    return 0;
}
