#include <stdio.h>
#include <stdbool.h>    // bool, true, false가 정의된 헤더 파일

int main()
{
    bool b1 = true;

    if (b1 == true)        // b1이 true인지 검사
        printf("참\n");    // b1이 true이므로 참이 출력됨
    else
        printf("거짓\n");

    return 0;
}
