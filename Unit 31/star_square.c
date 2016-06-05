#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)    // 5번 반복. 바깥쪽 루프는 세로 방향
    {
        for (int j = 0; j < 5; j++)    // 5번 반복. 안쪽 루프는 가로 방향
        {
            printf("*");               // 별 출력
        }
        printf("\n");              // 가로 방향으로 별을 다 그린 뒤 다음 줄로 넘어감
    }

    return 0;
}
