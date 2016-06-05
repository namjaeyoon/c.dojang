#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Point3D {
    float x;
    float y;
    float z;
};

int main()
{
    void *ptr = malloc(sizeof(struct Point3D) * 3);
    struct Point3D p[3];
    float result1, result2;

    scanf("%f %f %f %f %f %f %f %f %f", &p[0].x, &p[0].y, &p[0].z, &p[1].x, &p[1].y, &p[1].z, &p[2].x, &p[2].y, &p[2].z);

    memcpy(ptr, p, sizeof(struct Point3D) * 3);
    memset(p, 0, sizeof(struct Point3D) * 3);

    /*_______________________________________
    _______________________________________*/

    printf("%.1f %.1f\n", result1, result2);

    free(ptr);

    return 0;
}
