#include <stdio.h>
#include <string.h>

int main()
{
    char text[30] = "Hello";
    int length;

    length = strlen(text);    // 문자열의 길이를 구함

    // 2-gram이므로 문자열의 끝에서 한 글자 앞까지만 반복함
    for (int i = 0; i < length - 1; i++)
    {
        printf("%c%c\n", text[i], text[i + 1]);    // 현재 문자와 그 다음 문자 출력
    }

    return 0;
}
