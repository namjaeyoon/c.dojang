#include <stdio.h>

void hello()    // 반환값과 매개변수가 없음
{
    printf("Hello, world!\n");
}

void bonjour()    // 반환값과 매개변수가 없음
{
    printf("bonjour le monde!\n");
}

int main()
{
    void (*fp)();   // 반환값과 매개변수가 없는 함수 포인터 fp 선언

    fp = hello;     // hello 함수의 메모리 주소를 함수 포인터 fp에 저장
    fp();           // Hello, world!: 함수 포인터로 hello 함수 호출

    fp = bonjour;   // bonjour 함수의 메모리 주소를 함수 포인터 fp에 저장
    fp();           // bonjour le monde!: 함수 포인터로 bonjour 함수 호출

    return 0;
}
