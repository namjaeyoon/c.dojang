#include <stdio.h>

enum DayOfWeek {    // 열거형 정의
    Sunday = 0,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
} week;             // 열거형을 정의하는 동시에 변수 week 선언

int main()
{
    week = Tuesday;    // 열거형 값 할당

    printf("%d\n", week);    // 2: Tuesday의 값 출력

    return 0;
}
