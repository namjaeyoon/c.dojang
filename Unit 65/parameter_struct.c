#define _CRT_SECURE_NO_WARNINGS   // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

struct Person {
    char name[20];
    int age;
    char address[100];
};

void printPerson(struct Person p)    // 반환값 없음, 구조체 매개변수 한 개 지정
{
    // 구조체 매개변수 멤버의 값 출력
    printf("이름: %s\n", p.name);       // 이름: 홍길동
    printf("나이: %d\n", p.age);        // 나이: 30
    printf("주소: %s\n", p.address);    // 주소: 서울시 용산구 한남동
}

int main()
{
    struct Person p1;

    strcpy(p1.name, "홍길동");
    p1.age = 30;
    strcpy(p1.address, "서울시 용산구 한남동");

    printPerson(p1);    // 함수를 호출할 때 구조체 변수 전달, 멤버가 복사됨

    return 0;
}
