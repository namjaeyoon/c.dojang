#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);    // 값을 입력받음

    switch (num1)
    {
    case 1:    // 1 또는
    case 2:    // 2일 때 코드 실행
        printf("1 또는 2입니다.\n");
        break;
    case 3:    // 3 또는
    case 4:    // 4일 때 코드 실행
        printf("3 또는 4입니다.\n");
        break;
    default:
        printf("default\n");
    }

    return 0;
}
