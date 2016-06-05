#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num1 = 0;

    bool exitOuterLoop = false;    // 바깥쪽 루프를 빠져나올지 결정하는 변수
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (num1 == 20)              // num1이 20이라면
            {
                exitOuterLoop = true;    // 바깥쪽 루프도 빠져나가겠음
                break;                   // 안쪽 루프를 끝냄
            }

            num1++;
        }

        if (exitOuterLoop == true)    // 바깥쪽 루프도 빠져나오겠다고 결정했으면
            break;                    // 바깥쪽 루프를 끝냄
    }

    printf("%d\n", num1);    // 20

    return 0;
}
