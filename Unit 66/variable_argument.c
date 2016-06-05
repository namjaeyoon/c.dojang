#include <stdio.h>

// args는 고정 매개변수
void printNumbers(int args, ...)
{
    printf("%d ", args);
}

int main()
{
    printNumbers(1, 10);
    printNumbers(2, 10, 20);
    printNumbers(3, 10, 20, 30);
    printNumbers(4, 10, 20, 30, 40);

    return 0;
}
