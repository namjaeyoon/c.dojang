#include <stdio.h>

int add(int a, int b)    // int형 반환값, int형 매개변수 두 개
{
    return a + b;
}

typedef int (*FP)(int, int);    // FP를 함수 포인터 별칭으로 정의

FP getAdd()    // 함수 포인터 별칭을 반환값으로 지정
{
    return add;    // add 함수의 메모리 주소를 반환
}

int main()
{
    printf("%d\n", getAdd()(10, 20));    // 30: getAdd을 호출한 뒤 반환값으로 add 함수 호출

    return 0;
}
