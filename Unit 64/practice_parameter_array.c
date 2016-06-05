#include <stdio.h>

void setElements(/*__________________*/)
{
    for (int i = 0; i < count; i++)
    {
        arr[i] = 1.2f;
    }
}

int main()
{
    float numArr[5];

    setElements(numArr, sizeof(numArr) / sizeof(float));

    for (int i = 0; i < sizeof(numArr) / sizeof(float); i++)
        printf("%f ", numArr[i]);

    printf("\n");

    return 0;
}
