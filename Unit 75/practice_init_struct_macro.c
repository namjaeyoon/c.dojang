#include <stdio.h>

struct Point3D {
    float x, y, z;
};

#define /*_______________________________________________________*/

int main()
{
    INIT_POINT3D(p1, 1.0f, 2.0f, 3.0f);

    printf("%.1f %.1f %.1f\n", p1.x, p1.y, p1.z);

    return 0;
}
