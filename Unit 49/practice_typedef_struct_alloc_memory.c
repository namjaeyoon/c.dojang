#include <stdio.h>
#include <stdlib.h>

typedef struct _Point3D {
    float x;
    float y;
    float z;
} Point3D;

int main()
{
    Point3D *p1 = /*(1)________________*/;

    /*(2)________
    _____________
    ___________*/

    printf("%f %f %f\n", p1->x, p1->y, p1->z);

    free(p1);

    return 0;
}
