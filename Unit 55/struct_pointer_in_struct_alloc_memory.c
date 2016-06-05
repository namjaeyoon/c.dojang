#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

struct Phone {    // 휴대전화 구조체
    int areacode;                 // 국가번호
    unsigned long long number;    // 휴대전화 번호
};

struct Person {    // 사람 구조체
    char name[20];          // 이름
    int age;                // 나이
    struct Phone *phone;    // 휴대전화. 구조체 포인터 선언
};

int main()
{
    struct Person *p1 = malloc(sizeof(struct Person));    // 바깥 구조체의 포인터에 메모리 할당
    p1->phone = malloc(sizeof(struct Phone));             // 멤버 포인터에 메모리 할당

    p1->phone->areacode = 82;          // 포인터->포인터->멤버 순으로 접근하여 값 할당
    p1->phone->number = 3045671234;    // 포인터->포인터->멤버 순으로 접근하여 값 할당

    printf("%d %llu\n", p1->phone->areacode, p1->phone->number);    // 82 3045671234

    free(p1->phone);    // 구조체 멤버의 메모리를 먼저 해제
    free(p1);           // 구조체 메모리 해제

    return 0;
}
