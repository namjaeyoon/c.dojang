#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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

    FILE *fp = fopen(/*(1)_________*/);

    fread(/*(2)_______________*/);

    printf("%d %d %f %f %f %f %s\n",
        rf.magic, rf.version, rf.p1.x, rf.p1.y, rf.p2.x, rf.p2.y, rf.desc);

    fclose(fp);

    return 0;
}
