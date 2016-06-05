#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    char *s1 = "Hello";    // 문자열 포인터를 선언하고 문자열 할당

    printf("문자열을 입력하세요: ");
    scanf("%s", s1);    // 실행 에러

    printf("%s\n", s1);

    return 0;
}
