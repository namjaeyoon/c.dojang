#include <stdio.h>
#include <time.h>

void delay(unsigned int sec)    // 특정 시간(초)만큼 기다리는 함수
{
    clock_t ticks1 = clock();
    clock_t ticks2 = ticks1;
    while ((ticks2 / CLOCKS_PER_SEC - ticks1 / CLOCKS_PER_SEC) < (clock_t)sec)
        ticks2 = clock();
}

int main()
{
    setvbuf(stdout, NULL, _IOFBF, 10);    // 출력 버퍼의 크기를 10으로 설정

    printf("Hello, world!\n");

    delay(3);    // 3초간 기다림

    return 0;
}
