#define _CRT_NONSTDC_NO_WARNINGS   // 비표준 함수를 사용했을 때 에러 방지
#include <stdio.h>
#include <conio.h>

int main()
{
    int c1 = 'a';

    putch(c1);   // 출력 버퍼를 사용하지 않음, 문자 하나를 화면에 출력

    return 0;
}
