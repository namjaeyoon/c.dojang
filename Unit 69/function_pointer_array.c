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
    int (*fp[4])(int, int);    // int형 반환값, int형 매개변수 두 개가 있는 함수 포인터 배열 선언

    fp[0] = add;    // 첫 번째 요소에 덧셈 함수의 메모리 주소 저장
    fp[1] = sub;    // 두 번째 요소에 뺄셈 함수의 메모리 주소 저장
    fp[2] = mul;    // 세 번째 요소에 곱셈 함수의 메모리 주소 저장
    fp[3] = div;    // 네 번째 요소에 나눗셈 함수의 메모리 주소 저장

    printf("함수 번호와 계산할 값을 입력하세요: ");
    scanf("%d %d %d", &funcNumber, &num1, &num2);    // 함수 번호와 계산할 값을 입력받음

    printf("%d\n", fp[funcNumber](num1, num2));    // 함수 포인터 배열을 인덱스로 접근하여 함수 호출

    return 0;
}
