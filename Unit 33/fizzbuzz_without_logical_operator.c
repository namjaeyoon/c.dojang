#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)   // 1부터 100까지 100번 반복
    {
        if (i % 15 == 0)             // 15의 배수(3과 5의 공배수)일 때
            printf("FizzBuzz\n");    // FizzBuzz 출력
        else if (i % 3 == 0)         // 3의 배수일 때
            printf("Fizz\n");        // Fizz 출력
        else if (i % 5 == 0)         // 5의 배수일 때
            printf("Buzz\n");        // Buzz 출력
        else
            printf("%d\n", i);       // 아무것도 해당되지 않을 때 숫자 출력
    }

    return 0;
}
