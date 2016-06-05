#include <stdio.h>

struct Point2D {
    int x;
    int y;
};

/*___________________________*/

void printPoint2D()
{
    printf("%d %d\n", p1.x, p1.y);
}

int main()
{
    printf("%d %d\n", p1.x, p1.y);

    p1.x = 30;
    p1.y = 40;
    printPoint2D();

    return 0;
}
