#include <stdio.h>

typedef enum _Month {
    /*________

    ________*/
} Month;

int main()
{
    for (Month i = Jan; i < MonthCount; i++)
    {
        printf("%d ", i);
    }

    return 0;
}
