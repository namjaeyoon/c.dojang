#include <stdio.h>
#include <stdbool.h>

static bool output = false;

/*_______*/ getOutputConfig()
{
    return output;
}

int main()
{
    if (getOutputConfig())
    {
        printf("The Little Prince\n");
    }

    return 0;
}
