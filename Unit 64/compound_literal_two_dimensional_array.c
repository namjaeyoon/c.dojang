#include <stdio.h>

void print2DArray(int (*arr)[5], int col, int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }
}

int main()
{
    // 복합 리터럴 방식으로 2차원 배열을 넘겨줌
    print2DArray((int[2][5]) { { 1, 2, 3, 4, 5 }, { 6, 7, 8, 9, 10 } }, 5, 2);

    return 0;
}
