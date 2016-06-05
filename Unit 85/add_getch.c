#define _CRT_NONSTDC_NO_WARNINGS    // 비표준 함수를 사용했을 때 에러 방지
#define _CRT_SECURE_NO_WARNINGS     // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2;

    printf("숫자 두 개를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    printf("두 숫자의 합은 %d입니다.\n", num1 + num2);

    printf("아무 키나 입력하면 콘솔 창을 닫습니다.\n");
    getch();    // 키를 입력할 때까지 콘솔 창이 계속 켜져 있도록 만듦

    return 0;
}
