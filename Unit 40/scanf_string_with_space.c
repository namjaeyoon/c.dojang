#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    char s1[30];

    printf("문자열을 입력하세요: ");
    scanf("%[^\n]s", s1);    // 공백까지 포함하여 문자열 입력받기

    printf("%s\n", s1);

    return 0;
}
