#include <stdio.h>

int main()
{
    const int con1 = 1;

    con1 = 2;    // 상수에 값을 할당하면 컴파일 에러 발생

    printf("%d\n", con1);

    return 0;
}
