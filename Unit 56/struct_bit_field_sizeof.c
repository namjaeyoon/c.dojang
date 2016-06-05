#include <stdio.h>

struct Flags {
    unsigned int a : 1;    // a는 1비트 크기
    unsigned int b : 3;    // b는 3비트 크기
    unsigned int c : 7;    // c는 7비트 크기
};

int main()
{
    printf("%d", sizeof(struct Flags));    // 4: 멤버를 unsigned int로 선언했으므로 4

    return 0;
}
