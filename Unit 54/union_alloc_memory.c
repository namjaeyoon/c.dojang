#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

union Box {    // 공용체 정의
    short candy;
    float snack;
    char doll[8];
};

int main()
{
    union Box *b1 = malloc(sizeof(union Box));    // 공용체 포인터 선언, 메모리 할당

    printf("%d\n", sizeof(union Box));    // 8: 공용체의 전체 크기는 가장 큰 자료형의 크기

    strcpy(b1->doll, "bear");     // doll에 문자열 bear 복사

    printf("%d\n", b1->candy);    // 25954
    printf("%f\n", b1->snack);    // 4464428256607938511036928229376.000000
    printf("%s\n", b1->doll);     // bear

    free(b1);    // 동적 메모리 해제

    return 0;
}
