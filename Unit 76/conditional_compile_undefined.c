#include <stdio.h>

#define NDEBUG    // NDEBUG 매크로 정의

int main()
{
#ifndef DEBUG     // DEBUG가 정의되어 있지 않을 때 코드를 컴파일
    printf("main function\n");
#endif

    return 0;
}
