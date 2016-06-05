#include <stdio.h>

#define DEBUG    // DEBUG 매크로 정의
#define TEST     // TEST 매크로 정의

int main()
{
    // DEBUG 또는 TEST가 정의되어 있으면서 VERSION_10이 정의되어 있지 않을 때
#if (defined DEBUG || defined TEST) && !defined (VERSION_10)
    printf("Debug\n");
#endif

    return 0;
}
