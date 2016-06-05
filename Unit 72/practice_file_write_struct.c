#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#pragma pack(push, 1)
struct Point2D {
    float x;
    float y;
};

struct RectangleFileFormat {
    short magic;
    int version;
    struct Point2D p1;
    struct Point2D p2;
    char desc[30];
};
#pragma pack(pop)

int main()
{
    struct RectangleFileFormat rf;
    memset(&rf, 0, sizeof(rf));

    rf.magic = 're';
    rf.version = 1;
    rf.p1.x = 4.5f;
    rf.p1.y = 2.1f;
    rf.p2.x = 9.2f;
    rf.p2.y = 8.7f;
    strcpy(rf.desc, "Rectangle File Format");

    FILE *fp = fopen(/*(1)_________*/);

    fwrite(/*(2)_______________*/);

    fclose(fp);

    return 0;
}
