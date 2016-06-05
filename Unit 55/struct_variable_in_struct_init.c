#include <stdio.h>

struct Phone {
    int areacode;
    unsigned long long number;
};

struct Person {
    char name[20];
    int age;
    struct Phone phone;
};

int main()
{
    // phone의 멤버 areacode에는 82, number에는 3045671234
    struct Person p1 = { .name = "Andrew", .age = 25, { .areacode = 82, .number = 3045671234 } };

    printf("%d %llu\n", p1.phone.areacode, p1.phone.number);    // 82 3045671234

    // phone의 멤버 areacode에는 82, number에는 3087654321
    struct Person p2 = { "Maria", 19, { 82, 3087654321 } };

    printf("%d %llu\n", p2.phone.areacode, p2.phone.number);    // 82 3087654321

    return 0;
}
