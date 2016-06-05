#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

long long getSum(char *types, ...)
{
    va_list ap;
    int i = 0;
    long long result = 0;

    va_start(ap, types);
    while (types[i] != '\0')
    {
        /*(1)__________*/
        {
        case 's':
            /*(2)____________________________*/
            break;
        case 'i':
            /*(3)____________________________*/
            break;
        default:
            break;
        }
        i++;
    }
    va_end(ap);

    return result;
}

int main()
{
    printf("%lld\n", getSum("siis", "12", 30000, 500000, "300"));
    printf("%lld\n", getSum("ssi", "150", "150", 100));

    return 0;
}
