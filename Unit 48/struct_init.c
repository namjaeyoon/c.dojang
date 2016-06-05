#include <stdio.h>

struct Person {
    char name[20];
    int age;
    char address[100];
};

int main()
{
    // name에는 "홍길동", age에는 30, address에는 "서울시 용산구 한남동"
    struct Person p1 = { .name = "홍길동", .age = 30, .address = "서울시 용산구 한남동" };

    printf("이름: %s\n", p1.name);       // 이름: 홍길동
    printf("나이: %d\n", p1.age);        // 나이: 30
    printf("주소: %s\n", p1.address);    // 주소: 서울시 용산구 한남동

    // name에는 "고길동", age에는 40, address에는 "서울시 서초구 반포동"
    struct Person p2 = { "고길동", 40, "서울시 서초구 반포동" };

    printf("이름: %s\n", p2.name);       // 이름: 고길동
    printf("나이: %d\n", p2.age);        // 나이: 40
    printf("주소: %s\n", p2.address);    // 주소: 서울시 서초구 반포동

    return 0;
}
