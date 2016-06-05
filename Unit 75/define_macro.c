#include <stdio.h>

#define ARRAY_SIZE 10    // 10을 ARRAY_SIZE로 정의

int main()
{
    char s1[ARRAY_SIZE];    // 10 대신 ARRAY_SIZE 매크로 사용

    for (int i = 0; i < ARRAY_SIZE; i++)    // 10 대신 ARRAY_SIZE 매크로 사용
    {
        s1[i] = 97 + i;
    }

    for (int i = 0; i < ARRAY_SIZE; i++)    // 10 대신 ARRAY_SIZE 매크로 사용
    {
        printf("%c ", s1[i]);
    }

    return 0;
}
