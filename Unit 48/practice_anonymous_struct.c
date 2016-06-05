#include <stdio.h>

typedef struct {
    int x;
    int y;
/*____________*/

int main()
{
    Point2D p1;

    p1.x = 10;
    p1.y = 20;

    printf("%d %d\n", p1.x, p1.y);

    return 0;
}
