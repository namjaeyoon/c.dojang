#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int count;

    scanf("%d", &count);    // 값을 입력받음

    int i = 1;
    while (1)              // 무한 루프
    {
        printf("%d\n", i);
        if (i == count)    // i가 입력받은 값과 같을 때
            break;         // 반복문을 끝냄

        i++;
    }

    return 0;
}
