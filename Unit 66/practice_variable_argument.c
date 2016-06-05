#include <stdio.h>
#include <stdarg.h>

/*(1)_________________________*/
{
    va_list ap;

    va_start(ap, args);
    for (int i = 0; i < args; i++)
    {
        char *str = va_arg(ap, /*(2)__*/);
        printf("%s ", str);
    }
    va_end(ap);

    printf("\n");
}

int main()
{
    printStrings(2, "C", "Language");
    printStrings(3, "The", "Little", "Prince");

    return 0;
}
