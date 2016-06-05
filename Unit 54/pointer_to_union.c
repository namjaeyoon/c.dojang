#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

union Box {
    short candy;
    float snack;
    char doll[8];
};

int main()
{
    union Box b1;      // 공용체 변수 선언
    union Box *ptr;    // 공용체 포인터 선언

    ptr = &b1;    // b1의 메모리 주소를 구하여 ptr에 할당

    strcpy(ptr->doll, "bear");     // doll에 문자열 bear 복사

    printf("%d\n", ptr->candy);    // 25954
    printf("%f\n", ptr->snack);    // 4464428256607938511036928229376.000000
    printf("%s\n", ptr->doll);     // bear

    return 0;
}
