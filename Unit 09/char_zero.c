#include <stdio.h>

int main()
{
    char c1 = '0';    // 문자 0을 저장
    char c2 = 0;      // 숫자 0을 저장

    printf("%c %d\n", c1, c1);    // 0 48: 문자 상태로 0이 출력됨
                                  // 문자 0의 ASCII 코드 48이 출력됨

    printf("%c %d\n", c2, c2);    //   0: ASCII 코드 0은 널문자이므로 아무것도 출력되지 않음
                                  // 정수 0이 출력됨

    return 0;
}
