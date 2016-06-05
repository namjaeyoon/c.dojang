#include "calc.h"
#include "print.h"

int main()
{
    CALC_DATA data;
    data.operand1 = 2;
    data.operand2 = 3;

    mul(&data);
    print(&data);

    return 0;
}
