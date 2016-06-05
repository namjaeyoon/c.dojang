#define _CRT_SECURE_NO_WARNINGS // strtok 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h> // strtok 함수가 선언된 헤더 파일

int main()
{
    char *s1 = "The Little Prince";   // 포인터에 문자열 리터럴 "You Can Advance"의 주소 저장

    char *ptr = strtok(s1, " ");      // 실행 에러

    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strtok(NULL, " ");
    }

    return 0;
}
