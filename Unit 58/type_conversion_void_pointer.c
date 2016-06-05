#include <stdio.h>

int main()
{
    int num1 = 10;
    float num2 = 3.5f;
    char c1 = 'a';
    void *ptr;

    ptr = &num1;    // num1의 메모리 주소를 void 포인터 ptr에 저장
    // printf("%d\n", *ptr);         // 컴파일 에러
    printf("%d\n", *(int *)ptr);     // 10: void 포인터를 int 포인터로 변환한 뒤 역참조

    ptr = &num2;    // num2의 메모리 주소를 void 포인터 ptr에 저장
    // printf("%f\n", *ptr);         // 컴파일 에러
    printf("%f\n", *(float *)ptr);   // 3.500000: void 포인터를 float 포인터로 변환한 뒤 역참조

    ptr = &c1;      // c1의 메모리 주소를 void 포인터 ptr에 저장
    // printf("%c\n", *ptr);         // 컴파일 에러
    printf("%c\n", *(char *)ptr);    // a: void 포인터를 char 포인터로 변환한 뒤 역참조

    return 0;
}
