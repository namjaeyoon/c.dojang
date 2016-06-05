#include <stdio.h>
#include "print.h"

void print(CALC_DATA *data)
{
    printf("%d %c %d = %d\n",
        data->operand1,
        data->operator,
        data->operand2,
        data->result
    );
}
