#include <stdio.h>

int main()
{
    char s1[10];    // 문자 10개 크기의 배열 선언

    for (int i = 0; i < 10; i++)    // 배열 크기만큼 반복
    {
        s1[i] = 97 + i;
    }

    for (int i = 0; i < 10; i++)    // 배열 크기만큼 반복
    {
        printf("%c ", s1[i]);
    }

    return 0;
}
