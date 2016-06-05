#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int count;

    scanf("%d", &count);    // 값을 입력받음

    do    // 처음 한 번은 아래 코드가 실행됨
    {
        printf("Hello, world! %d\n", count);    // Hello, world!와 i의 값을 함께 출력
        count--;                                // count를 1씩 감소시킴
    } while (count > 0);                        // count가 0보다 클 때 반복

    return 0;
}
