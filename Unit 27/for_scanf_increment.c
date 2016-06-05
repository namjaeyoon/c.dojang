#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int count;

    scanf("%d", &count);    // 값을 입력받음

    for (int i = 0; i < count; i++)    // 0부터 입력받은 값보다 작을 때까지 반복
    {
        printf("Hello, world! %d\n", i);
    }

    return 0;
}
