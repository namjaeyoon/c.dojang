#include <stdio.h>

int main()
{
    for (int i = 0; i < 3; i++)    // 3번 반복. 세로 방향
    {
        for (int j = 0; j < 7; j++)    // 7번 반복. 가로 방향
        {
            printf("*");               // 별 출력
        }
        printf("\n");              // 가로 방향으로 별을 다 그린 뒤 다음 줄로 넘어감
    }

    return 0;
}
