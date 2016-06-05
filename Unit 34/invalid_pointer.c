#include <stdio.h>

int main()
{
    int *numPtr = 0x100;    // 포인터에 0x100을 직접 저장

    printf("%d\n", *numPtr);    // 0x100은 잘못된 메모리 주소이므로 실행 에러

    return 0;
}
