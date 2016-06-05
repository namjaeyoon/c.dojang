#include <stdio.h>

int main()
{
    char lineFeed = '\n';    // 제어 문자 \n 할당

    printf("%d 0x%x\n", lineFeed, lineFeed);    // 10 0xa: 제어 문자의 ASCII 코드 출력

    return 0;
}
