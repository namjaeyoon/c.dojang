#include <stdio.h>

int main()
{
    int *numPtr1;     // ���� ������ ����
    int **numPtr2;    // ���� ������ ����
    int num1 = 10;

    numPtr1 = &num1;    // num1�� �޸� �ּ� ����

    numPtr2 = &numPtr1; // numPtr1�� �޸� �ּ� ����

    printf("%d\n", **numPtr2);    // 10: �����͸� �� �� �������Ͽ� num1�� �޸� �ּҿ� ����

    return 0;
}
