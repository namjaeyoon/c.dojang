#include <stdio.h>

// a와 b, 결과를 모두 괄호로 묶어줌
#define MUL(a, b) ((a) * (b))

// a와 b, 결과를 모두 괄호로 묶어줌
#define ADD(a, b) ((a) + (b))

int main()
{

    printf("%d\n", MUL(10, 20));          // 200: 10 * 20
    printf("%d\n", MUL(1 + 2, 3 + 4));    // 21: 3 * 7

    printf("%d\n", ADD(1, 2));        // 3: 1 + 2
    printf("%d\n", ADD(1, 2) * 3);    // 9: 3 * 3

    return 0;
}
