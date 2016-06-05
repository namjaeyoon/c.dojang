#include <stdio.h>

void hello(int count)
{
    if (count == 0)    // 종료 조건을 만듦. count가 0이면 다시 hello 함수를 호출하지 않고 끝냄
        return;

    printf("Hello, world! %d\n", count);

    hello(--count);    // count를 감소시켜서 다시 hello에 넣음
}

int main()
{
    hello(5);    // hello 함수 호출

    return 0;
}
