#include <stdio.h>

int main()
{
    int num1 = 1;
    int num2 = 0;

    if (num1 && num2)      // num1과 num2가 모두 참인지 검사
        printf("참\n");
    else
        printf("거짓\n");  // num1만 참이므로 거짓이 출력됨

    if (num1 || num2)      // num1과 num2 둘 줄 하나가 참인지 검사
        printf("참\n");    // num1이 참이므로 참이 출력됨
    else
        printf("거짓\n");

    if (!num1)             // num1을 반대로 뒤집음
        printf("참\n");
    else
        printf("거짓\n");  // 참을 뒤집었으므로 거짓이 출력됨

    return 0;
}
