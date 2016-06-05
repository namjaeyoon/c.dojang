#include <stdio.h>

int main()
{
    int i = 0;

    // do에 해당하는 부분
    printf("Hello, world! %d\n", i);    // 처음 한 번은 실행
    i++;                                // 처음 한 번은 실행

    while (i < 100)    // i가 100보다 작을 때 반복. 0부터 99까지 증가하면서 100번 반복
    {
        printf("Hello, world! %d\n", i);    // Hello, world!와 i의 값을 함께 출력
        i++;                                // i를 1씩 증가시킴
    }

    return 0;
}
