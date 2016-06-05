#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
    char address[100];
};

typedef struct {
    char name[20];
    int number;
    int displacement;
} Car;

int main()
{
    /*________________________________________________








    ________________________________________________*/

    printf("이름: %s\n", p1->name);
    printf("나이: %d\n", p1->age);
    printf("주소: %s\n", p1->address);

    printf("자동차 이름: %s\n", c1->name);
    printf("자동차 번호: %d\n", c1->number);
    printf("배기량: %dcc\n", c1->displacement);

    free(p1);
    free(c1);

    return 0;
}
