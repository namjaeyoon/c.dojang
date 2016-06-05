#include <stdio.h>

// a와 b를 붙이는 CONCAT 매크로 정의
#define CONCAT(a, b) a##b

int main()
{
    printf("%d\n", CONCAT(1, 2));    // 12

    return 0;
}
