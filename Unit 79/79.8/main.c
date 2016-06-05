#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Point2D {
    int x, y;
};

struct Point2D movePoint(int offset)
{
    /*___________________________________





    ___________________________________*/
}

int main()
{
    int num1;
    struct Point2D p;

    scanf("%d", &num1);

    p = movePoint(num1);
    printf("%d %d\n", p.x, p.y);

    p = movePoint(num1);
    printf("%d %d\n", p.x, p.y);

    p = movePoint(num1);
    printf("%d %d\n", p.x, p.y);

    return 0;
}
