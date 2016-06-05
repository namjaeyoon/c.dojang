#include <stdio.h>

typedef enum _DayOfWeek {    // 열거형 이름은 _DayOfWeek
    Sunday = 0,                  // 초깃값을 0으로 할당
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    DayOfWeekCount               // 열거형 값의 개수를 나타내는 항목 추가
} DayOfWeek;                 // typedef를 사용하여 열거형 별칭을 DayOfWeek로 정의

int main()
{
    // 초깃값은 Sunday, i가 DayOfWeekCount보다 작을 때까지만 반복
    for (DayOfWeek i = Sunday; i < DayOfWeekCount; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
