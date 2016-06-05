#include <stdio.h>
#include <stdbool.h>    // bool, true, false가 정의된 헤더 파일

int main()
{
    bool b1 = true;
    bool b2 = false;

    printf(b1 ? "true" : "false");    // b1이 true이므로 true가 출력됨
    printf("\n");
    printf(b2 ? "true" : "false");    // b2가 false이므로 false 출력됨
    printf("\n");

    printf("%s\n", b1 ? "true" : "false");    // b1이 true이므로 true가 출력됨
    printf("%s\n", b2 ? "true" : "false");    // b2가 false이므로 false 출력됨

    return 0;
}
