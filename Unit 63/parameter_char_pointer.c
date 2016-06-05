#include <stdio.h>

void helloString(char *s1)    // 반환값 없음, char 포인터 매개변수 한 개 지정
{
    printf("Hello, %s\n", s1);    // Hello, 와 매개변수를 조합하여 문자열 출력
}

int main()
{
    helloString("world!");    // Hello, world!: 함수를 호출할 때 문자열을 전달

    return 0;
}
