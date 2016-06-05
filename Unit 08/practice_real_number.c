#include <stdio.h>

int main()
{
    /*(1)____*/ num1 = 1.97f;
    /*(2)____*/ num2 = 5.524218l;
    /*(3)____*/ num3 = 3792.8e+4;

    printf("%f %Lf %f\n", num1, num2, num3);

    return 0;
}
