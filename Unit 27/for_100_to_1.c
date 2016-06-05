#include <stdio.h>

int main()
{
    for (int i = 100; i > 0; i--)         // 100부터 1까지 감소하면서 100번 반복
    {
        printf("Hello, world! %d\n", i);  // Hello, world!와 i의 값을 함께 출력
    }

    return 0;
}
