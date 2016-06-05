#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool b1;

    b1 = (false || false) && !false || false;    // 논리 연산자의 우선순위는 !, &&, || 순

    printf("%d\n", b1);    // 0: false AND true 이므로 0

    return 0;
}
