#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

typedef struct _Person {
    char name[20];
    int age;
    char address[100];
} Person, *PPerson;    // 구조체 별칭 Person, 구조체 포인터 별칭 PPerson

void setPerson(PPerson p)    // Person 구조체 포인터의 별칭을 매개변수로 지정
{
    strcpy(p->name, "고길동");
    p->age = 40;
    strcpy(p->address, "서울시 서초구 반포동");
}

int main()
{
    Person p1;

    strcpy(p1.name, "홍길동");
    p1.age = 30;
    strcpy(p1.address, "서울시 용산구 한남동");

    setPerson(&p1);    // 함수를 호출할 때 구조체 변수의 메모리 주소를 전달

    // setPerson에서 변경한 값이 출력됨
    printf("이름: %s\n", p1.name);       // 이름: 고길동
    printf("나이: %d\n", p1.age);        // 나이: 40
    printf("주소: %s\n", p1.address);    // 주소: 서울시 서초구 반포동

    return 0;
}
