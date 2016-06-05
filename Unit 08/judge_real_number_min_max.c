#include <stdio.h>
#include <float.h>

int main()
{
    double doubleMin;
    double doubleMax;
    long double longDoubleMin;
    long double longDoubleMax;

    /*______________________
    ________________________
    ________________________
    ______________________*/

    printf("%e %e\n", doubleMin, doubleMax);
    printf("%Le %Le\n", longDoubleMin, longDoubleMax);

    return 0;
}
