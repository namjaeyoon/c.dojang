#include <stdio.h>

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D p1;    // 점1
    struct Point2D p2;    // 점2

    // 점1 위치
    p1.x = 30;
    p1.y = 20;

    // 점2 위치
    p2.x = 60;
    p2.y = 50;

    printf("p1: %d %d\n", p1.x, p1.y);    // 30 20
    printf("p2: %d %d\n", p2.x, p2.y);    // 60 50

    return 0;
}
