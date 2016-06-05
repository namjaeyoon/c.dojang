#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)    // 5번 반복. 바깥쪽 루프는 세로 방향
    {
        for (int j = 0; j < 5; j++)    // 5번 반복. 안쪽 루프는 가로 방향
        {
            printf("j:%d ", j);        // j값 출력
        }

        printf("i:%d\\n", i);      // i값 출력, 개행 문자 모양도 출력
        printf("\n");              // 가로 방향으로 숫자를 모두 출력한 뒤 다음 줄로 넘어감
    }

    return 0;
}
