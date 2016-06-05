#include <stdio.h>
#include <stdbool.h>    // bool, true, false가 정의된 헤더 파일

int main()
{
    printf("int의 크기: %d\n", sizeof(int));      // int의 크기: 4: int의 크기는 4바이트
    printf("bool의 크기: %d\n", sizeof(bool));    // bool의 크기: 1: bool의 크기는 1바이트

    return 0;
}
