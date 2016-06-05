#pragma GCC diagnostic error "-Werror"
#include <stdio.h>

int main()
{
    const /*_______________________________*/
    const int con2 = 0x1285;
    const long long con3 = 9223372036854775807LL;

    printf("%Le 0x%x %lld\n", con1, con2, con3);

    return 0;
}
