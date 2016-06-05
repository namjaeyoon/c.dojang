#include <stdio.h>

struct Flags {
    union {
        struct {
            /*___________________
            _____________________
            _____________________
            ___________________*/
        };
        unsigned short e;
    };
};

int main()
{
    struct Flags f1 = { 0, };

    f1.a = 4;
    f1.b = 8;
    f1.c = 64;
    f1.d = 3;

    printf("%u\n", f1.e);

    return 0;
}
