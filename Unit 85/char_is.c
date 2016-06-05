#include <stdio.h>
#include <ctype.h>

int main()
{
    if (isspace('\t'))    // 스페이스, \f, \n, \r, \t, \v인지 검사
        printf("공백입니다.\n");

    if (isblank(' '))     // 스페이스, 탭 문자(\t)인지 검사
        printf("공백입니다.\n");

    if (isalpha('a'))     // 영문 알파벳인지 검사
        printf("알파벳입니다.\n");

    if (isupper('A'))     // 대문자인지 검사
        printf("대문자입니다.\n");

    if (islower('a'))     // 소문자인지 검사
        printf("소문자입니다.\n");

    if (isascii('~'))     // 7비트 ASCII 문자인지 검사
        printf("ASCII 문자입니다.\n");

    if (isdigit('9'))     // 숫자인지 검사
        printf("숫자입니다.\n");
    
    if (isxdigit('F'))    // 16진수 숫자인지 검사(0~9, a~f, A~F)
        printf("16진수 숫자입니다.\n");

    if (isalnum('a') && isalnum('1'))    // 영문 알파벳과 숫자인지 검사
        printf("영문 알파벳과 숫자입니다.\n");

    if (iscntrl('\n'))    // 제어문자인지 검사
        printf("제어문자입니다.\n");
    
    if (isgraph('a'))     // 화면에 출력할 수 있는지 검사(스페이스 제외)
        printf("화면에 출력할 수 있습니다.\n");

    if (isprint(' '))     // 화면에 출력할 수 있는지 검사(스페이스 포함)
        printf("화면에 출력할 수 있습니다.\n");

    if (ispunct('-'))     // 영문 알파벳, 숫자, 스페이스가 아닌 문자 중에서
                          // 화면에 출력할 수 있는지 검사
        printf("화면에 출력할 수 있습니다.\n");

    return 0;
}
