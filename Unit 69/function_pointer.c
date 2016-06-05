#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int main()
{
    int funcNumber;    // 함수 번호
    int num1, num2;
    int (*fp)(int, int) = NULL;    // int형 반환값, int형 매개변수 두 개가 있는 함수 포인터 선언

    printf("함수 번호와 계산할 값을 입력하세요: ");
    scanf("%d %d %d", &funcNumber, &num1, &num2);    // 함수 번호와 계산할 값을 입력받음

    switch (funcNumber)   // 함수 번호에 따라 함수 포인터 설정
    {
    case 0:               // 0이면
        fp = add;         // 덧셈 함수
        break;
    case 1:               // 1이면
        fp = sub;         // 뺄셈 함수
        break;
    case 2:               // 2이면
        fp = mul;         // 곱셈 함수
        break;
    case 3:               // 3이면
        fp = div;         // 나눗셈 함수
        break;
    }
    
    printf("%d\n", fp(num1, num2));    // 함수 포인터를 사용하여 계산 결과 출력

    return 0;
}
