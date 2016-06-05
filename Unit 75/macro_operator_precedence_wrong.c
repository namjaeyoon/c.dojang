#include <stdio.h>

// a와 b를 곱함
#define MUL(a, b) a * b

// a와 b를 더함
#define ADD(a, b) a + b

int main()
{
    printf("%d\n", MUL(10, 20));          // 200: 10 * 20
    printf("%d\n", MUL(1 + 2, 3 + 4));    // 11: 1 + 6 + 4, 2 * 3이 먼저 계산됨

    printf("%d\n", ADD(1, 2));        // 3: 1 + 2
    printf("%d\n", ADD(1, 2) * 3);    // 7: 1 + 6, 2 * 3이 먼저 계산됨

    return 0;
}
