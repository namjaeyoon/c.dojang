#include <stdio.h>

/*__________________



__________________*/

int main()
{
    enum PROTOCOL_TYPE p1, p2, p3;

    p1 = PROTOCOL_TCP;
    p2 = PROTOCOL_UDP;
    p3 = PROTOCOL_IP;

    printf("%d %d %d\n", p1, p2, p3);

    return 0;
}
