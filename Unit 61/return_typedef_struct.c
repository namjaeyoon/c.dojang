#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

typedef struct _Person {
    char name[20];
    int age;
    char address[100];
} Person, *PPerson;    // 구조체 별칭 Person, 구조체 포인터 별칭 PPerson

PPerson allocPerson()    // Person 구조체 포인터의 별칭을 반환값 자료형으로 지정
{
    PPerson p = malloc(sizeof(Person));    // 구조체 포인터에 동적 메모리 할당

    strcpy(p->name, "홍길동");
    p->age = 30;
    strcpy(p->address, "서울시 용산구 한남동");

    return p;    // 구조체 포인터 반환
}

int main()
{
    PPerson p1;

    p1 = allocPerson();    // 포인터를 반환하여 p1에 메모리 주소 저장

    // allocPerson에서 저장한 값들이 출력됨
    printf("이름: %s\n", p1->name);       // 이름: 홍길동
    printf("나이: %d\n", p1->age);        // 나이: 30
    printf("주소: %s\n", p1->address);    // 주소: 서울시 용산구 한남동

    free(p1);    // 동적 메모리 해제

    return 0;
}
