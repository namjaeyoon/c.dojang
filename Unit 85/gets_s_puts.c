#include <stdio.h>

int main()
{
    char buffer[100];

    gets_s(buffer, sizeof(buffer));    // 표준 입력에서 문자열을 입력받음
                                       // Visual Studio 2015

    puts(buffer);    // 문자열을 화면(표준 출력)에 출력

    return 0;
}
