#include <stdio.h>

int main()
{
    for (int i = 0; ++i <= 100;)    // 조건식 안에서 변화식을 함께 작성
        printf(i % 3 ? i % 5 ? "%d\n" : "Buzz\n" : i % 5 ? "Fizz\n" : "FizzBuzz\n", i);
        // 삼항 연산자를 세 번 사용하여 printf 안에서 처리

    return 0;
}
