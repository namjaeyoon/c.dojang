#include <stdio.h>

struct EncryptionHeader {
    char flags;
    /*_________
    _________*/
};

int main()
{
    struct EncryptionHeader header;

    printf("%d\n", sizeof(header));

    return 0;
}
