#include <stdio.h>

struct Flags {
    union {    // 익명 공용체
        struct {    // 익명 구조체
            unsigned short a : 3;    // a는 3비트 크기
            unsigned short b : 2;    // b는 2비트 크기
            unsigned short c : 7;    // c는 7비트 크기
            unsigned short d : 4;    // d는 4비트 크기
        };                           // 합계 16비트
        unsigned short e;    // 2바이트(16비트)
    };
};

int main()
{
    struct Flags f1 = { 0, };    // 모든 멤버를 0으로 초기화

    f1.a = 4;     //  4: 0000 0100
    f1.b = 2;     //  2: 0000 0010
    f1.c = 80;    // 80: 0101 0000
    f1.d = 15;    // 15: 0000 1111

    printf("%u\n", f1.e);    // 64020: 1111 1010000 10 100

    return 0;
}
