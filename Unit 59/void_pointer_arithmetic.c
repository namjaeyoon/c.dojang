#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    void *ptr = malloc(100);    // 100바이트만큼 메모리 할당

    printf("%p\n", ptr);               // 00FADD20: 메모리 주소. 컴퓨터마다, 실행할 때마다 달라짐
    printf("%p\n", (int *)ptr + 1);    // 00FADD24: 다른 포인터로 변환한 뒤 포인터 연산
    printf("%p\n", (int *)ptr - 1);    // 00FADD1C: 다른 포인터로 변환한 뒤 포인터 연산

    void *ptr2 = ptr;    // 메모리 주소를 변화시킬 때는 다른 포인터에 보관
    printf("%p\n", ++(int *)ptr2);      // 00FADD24: 다른 포인터로 변환한 뒤 포인터 연산
    printf("%p\n", --(int *)ptr2);      // 00FADD20: 다른 포인터로 변환한 뒤 포인터 연산

    printf("%p\n", ((int *)ptr2)++);    // 00FADD20: 다른 포인터로 변환한 뒤 포인터 연산
    printf("%p\n", ((int *)ptr2)--);    // 00FADD24: 다른 포인터로 변환한 뒤 포인터 연산

    free(ptr);

    return 0;
}
