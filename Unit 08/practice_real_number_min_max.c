#include <stdio.h>
/*(1)___________*/

int main()
{
    float num1 = FLT_MAX;
    double num2 = /*(2)___*/;
    long double num3 = /*(3)___*/;

    printf("%.2f\n", num1);
    printf("%e\n", num2);
    printf("%Le\n", num3);

    return 0;
}
