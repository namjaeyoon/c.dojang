#include <stdio.h>

int main()
{
    int num1 = 0;

    while (1)    // 무한 루프
    {
        num1++;  // num1을 1씩 증가시킴

        printf("%d\n", num1);

        if (num1 == 100)    // num1이 100일 때
            break;          // 반복문을 끝냄. while의 제어흐름을 벗어남
    }

    return 0;
}
