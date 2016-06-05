#include <stdio.h>
/*(1)____________*/

int main()
{
    int8_t num1 = INT8_MIN;
    uint16_t num2 = UINT16_MAX;
    int32_t num3 = INT32_MAX;
    /*(2)_*/ num4 = UINT64_MAX;

    printf("%d %u %d %llu\n", num1, num2, num3, num4);

    return 0;
}
