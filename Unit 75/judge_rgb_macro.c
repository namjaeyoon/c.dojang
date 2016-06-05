#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define /*__________________________________________________________________________________________________________________________*/

int main()
{
    int r, g, b;
    scanf("%d %d %d", &r, &g, &b);

    printf("#%06X\n", RGB(r, g, b));
    printf("#%06X\n", RGB(1 & 1, 2 & 2, 3 & 3));

    return 0;
}
