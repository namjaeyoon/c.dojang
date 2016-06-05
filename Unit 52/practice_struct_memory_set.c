#include <stdio.h>
#include <stdlib.h>
/*(1)____________*/

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D p;
    struct Point2D *ptr = malloc(sizeof(struct Point2D));

    memset(/*(2)_______________________*/);
    memset(/*(3)_______________________*/);

    printf("%d %d %d %d\n", p.x, p.y, ptr->x, ptr->y);

    free(ptr);

    return 0;
}
