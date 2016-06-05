#include <stdio.h>

struct Person {
    char name[20];
    int age;
    char address[100];
};

void printPerson(struct Person p)
{
    printf("이름: %s\n", p.name);
    printf("나이: %d\n", p.age);
    printf("주소: %s\n", p.address);
}

int main()
{
    // 복합 리터럴 방식으로 구조체를 넘겨줌
    printPerson((struct Person) { .name = "홍길동", .age = 30, .address = "서울시 용산구 한남동" });

    // 복합 리터럴 방식으로 구조체를 넘겨줌. 멤버 이름 생략
    printPerson((struct Person) { "고길동", 40, "서울시 서초구 반포동" });

    return 0;
}
