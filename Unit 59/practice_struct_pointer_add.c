#include <stdio.h>

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D p[3] = { { 10, 20 }, { 30, 40 }, { 50, 60 } };
    struct Point2D *ptr;

    ptr = p;

    printf("%d %d\n", /*_ptr______,__ptr______*/);

    return 0;
}
