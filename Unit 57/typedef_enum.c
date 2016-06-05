#include <stdio.h>

typedef enum _DayOfWeek {    // 열거형 이름은 _DayOfWeek
    Sunday = 0,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
} DayOfWeek;                 // typedef를 사용하여 열거형 별칭을 DayOfWeek로 정의

int main()
{
    DayOfWeek week;    // 열거형 별칭으로 공용체 변수 선언

    week = Tuesday;    // 열거형 값 할당

    printf("%d\n", week);    // 2: Tuesday의 값 출력

    return 0;
}
