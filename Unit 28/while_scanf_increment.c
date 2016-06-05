#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int count;

    scanf("%d", &count);    // 값을 입력받음

    int i = 0;
    while (i < count)                      // i가 count보다 작을 때 반복
    {
        printf("Hello, world! %d\n", i);   // Hello, world!와 i의 값을 함께 출력
        i++;                               // i를 1씩 증가시킴
    }

    return 0;
}
