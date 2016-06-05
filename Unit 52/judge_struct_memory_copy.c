#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
    char address[100];
};

int main()
{
    struct Person *p1 = malloc(sizeof(struct Person));
    struct Person p2;

    strcpy(p1->name, "고길동");
    p1->age = 40;
    strcpy(p1->address, "서울시 서초구 반포동");

    memcpy(/*__________________________*/);

    printf("이름: %s\n", p2.name);
    printf("나이: %d\n", p2.age);
    printf("주소: %s\n", p2.address);

    free(p1);

    return 0;
}
