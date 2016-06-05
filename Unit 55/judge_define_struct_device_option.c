#include <stdio.h>

/*__________________________________







__________________________________*/

int main()
{
    struct DeviceOption opt;

    opt.boot = 0x22;
    opt.interrupt = 0x11;

    printf("0x%x\n", opt.option);

    return 0;
}
