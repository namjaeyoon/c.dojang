#include <stdio.h>

int main()
{
    int i = 100;

    do    // 처음 한 번은 아래 코드가 실행됨
    {
        printf("Hello, world! %d\n", i);    // Hello, world!와 i의 값을 함께 출력
        i--;                                // i를 1씩 감소시킴
    } while (i > 0);    // i가 0보다 클 때 반복. 100부터 1까지 감소하면서 100번 반복

    return 0;
}
