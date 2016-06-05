#define _CRT_NONSTDC_NO_WARNINGS    // 비표준 함수를 사용했을 때 에러 방지
#include <stdio.h>
#include <conio.h>

int main()
{
    int c1 = getch();    // 입력 버퍼를 사용하지 않음, 화면에 키의 입력을 보여주지 않음

    printf("%c\n", c1);

    return 0;
}
