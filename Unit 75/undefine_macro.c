#include <stdio.h>

#define COUNT 10    // 10을 COUNT로 정의

int main()
{
    printf("%d\n", COUNT);    // 10

#undef COUNT        // 앞에서 정의한 COUNT 해제
#define COUNT 20    // 20을 COUNT로 정의

    printf("%d\n", COUNT);   // 20: #undef로 COUNT를 해제한 뒤 20을 COUNT로 정의했으므로 20이 출력됨

    return 0;
}
