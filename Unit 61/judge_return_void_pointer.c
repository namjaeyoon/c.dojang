#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*__________________________




__________________________*/

int main()
{
    char *name;
    float *stats;

    name = allocMemory();
    strcpy(name, "Mercury");
    printf("%s\n", name);
    free(name);

    stats = allocMemory();
    stats[0] = 87.969f;
    stats[1] = 115.8776f;
    printf("%f %f\n", stats[0], stats[1]);
    free(stats);

    return 0;
}
