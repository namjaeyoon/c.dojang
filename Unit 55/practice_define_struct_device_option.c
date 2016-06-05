#include <stdio.h>

struct DeviceOption {
    /*___________________________________
        unsigned long long option;




    ___________________________________*/
};

int main()
{
    struct DeviceOption opt;

    opt.boot[0] = 0x01;
    opt.boot[1] = 0x02;
    opt.boot[2] = 0x03;
    opt.boot[3] = 0x04;
    opt.interrupt[0] = 0x05;
    opt.interrupt[1] = 0x06;
    opt.bus[0] = 0x07;
    opt.bus[1] = 0x11;

    printf("0x%llx\n", opt.option);

    return 0;
}
