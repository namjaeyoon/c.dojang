#include <stdio.h>

int main()
{
    int num1 = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (num1 == 20)    // num1이 20이라면
                goto EXIT;     // 레이블 EXIT로 즉시 이동

            num1++;
        }
    }

EXIT:    // 레이블 EXIT
    printf("%d\n", num1);    // 20

    return 0;
}
