#include <stdio.h>

int main()
{
    int i = 1;

    do    // 처음 한 번은 아래 코드가 실행됨
    {
        printf("Hello, world! %d\n", i);    // Hello, world!와 i의 값을 함께 출력
        i++;                                // i를 1씩 증가시킴
    } while (i <= 100);    // i가 100보다 작거나 같을 때 반복. 1부터 100까지 증가하면서 100번 반복

    return 0;
}
