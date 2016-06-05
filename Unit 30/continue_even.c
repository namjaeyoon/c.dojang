#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int count;

    scanf("%d", &count);    // 값을 입력받음

    for (int i = 1; i <= count; i++)    // 1부터 증가하면서 count보다 작거나 같을 때까지 반복
    {
        if (i % 2 != 0)                 // i를 2로 나누었을 때 나머지가 0이 아니면 홀수
            continue;                   // 아래 코드를 실행하지 않고 건너뜀

        printf("%d\n", i);
    }

    return 0;
}
