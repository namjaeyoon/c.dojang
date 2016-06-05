#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

struct Calc {
    /*(1)________________*/
};

int executer(/*(2)____________*/, int a, int b)
{
    return fp(a, b);
}

/*(3)_getFunc____________________________________*/
{
    return c->fp[index];
}

int main()
{
    struct Calc c = { { add, sub } };

    printf("%d\n", executer(getFunc(&c, 0), 10, 20));
    printf("%d\n", executer(getFunc(&c, 1), 10, 20));

    return 0;
}
