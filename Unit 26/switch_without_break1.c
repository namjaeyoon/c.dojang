#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);    // 값을 입력받음

    // switch의 case에서 break 삭제
    switch (num1)
    {
    case 1:    // 1일 때는 아래 case 2, default가 모두 실행됨
        printf("1입니다.\n");
    case 2:    // 2일 때는 아래 default까지 실행됨
        printf("2입니다.\n");
    default:
        printf("default\n");
    }

    return 0;
}
