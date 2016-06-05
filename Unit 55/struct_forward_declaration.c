#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

struct Phone;    // Phone 구조체 전방 선언

struct Person {
    char name[20];
    int age;
    struct Phone *phone;    // 아직 정의되지 않은 구조체를 포인터로 선언
};

struct Phone {    // Phone 구조체 정의
    int areacode;
    unsigned long long number;
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
