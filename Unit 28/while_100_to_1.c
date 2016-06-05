#include <stdio.h>

int main()
{
    int i = 100;
    while (i > 0)    // i가 0보다 클 때 반복. 100부터 1까지 감소하면서 100번 반복
    {
        printf("Hello, world! %d\n", i);    // Hello, world!와 i의 값을 함께 출력
        i--;                                // i를 1씩 감소시킴
    }

    return 0;
}
