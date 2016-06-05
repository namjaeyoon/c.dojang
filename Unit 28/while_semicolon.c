#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 100);    // while 맨 뒤에 세미콜론을 붙이면 안됨
    {
        printf("Hello, world!\n");
        i++;
    }

    return 0;
}
