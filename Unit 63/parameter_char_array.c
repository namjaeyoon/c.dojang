#include <stdio.h>

void helloString(char s1[])    // 반환값 없음, char 배열을 매개변수로 지정, 크기 생략
{
    printf("Hello, %s\n", s1);    // Hello, 와 매개변수를 조합하여 문자열 출력
}

int main()
{
    char s1[10] = "world!";   // 배열 형태의 문자열

    helloString(s1);          // Hello, world!: 함수를 호출할 때 배열 전달
    helloString("world!");    // Hello, world!: 함수를 호출할 때 문자열 전달

    return 0;
}
