#include <stdio.h>

#define USB    // USB 매크로 정의

int main()
{
#ifdef PS2              // PS2가 정의되어 있을 때 코드를 컴파일
    printf("PS2\n");
#elif defined USB       // PS2가 정의되어 있지 않고, USB가 정의되어 있을 때 코드를 컴파일
    printf("USB\n");
#else                   // PS2와 USB가 정의되어 있지 않을 때 코드를 컴파일
    printf("지원하지 않는 장치입니다.\n");
#endif

    return 0;
}
