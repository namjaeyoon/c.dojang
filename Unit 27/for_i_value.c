#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 10; i++)    // 0부터 9까지 증가하면서 10번 반복
    {
        printf("Hello, world!\n");
    }

    printf("%d\n", i);    // 반복문이 끝난 뒤 i의 값 출력

    return 0;
}
