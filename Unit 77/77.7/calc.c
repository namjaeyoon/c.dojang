#include "calc.h"

void mul(CALC_DATA *data)
{
    data->operator = '*';

    data->result = data->operand1 * data->operand2;
}
