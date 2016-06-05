#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Rectangle {
    int x1, y1;
    int x2, y2;
};

int main()
{
    struct Rectangle rect;
    int area;

    rect.x1 = 20;
    rect.y1 = 20;
    rect.x2 = 40;
    rect.y2 = 30;

    /*(1)_____________________________*/
    /*(2)_____________________________*/
    /*(3)_____________________________*/

    printf("%d\n", area);

    return 0;
}
