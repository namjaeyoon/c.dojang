#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s1 = /*(1)____*/;
    float num1;

    num1 = atof(s1);

    printf("%f\n", /*(2)__*/);

    return 0;
}
