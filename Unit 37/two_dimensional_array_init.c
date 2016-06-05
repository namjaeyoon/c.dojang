#include <stdio.h>

int main()
{
    int numArr[3][4] = { 0, };       // 2차원 배열의 요소를 모두 0으로 초기화

    printf("%d\n", numArr[0][0]);    // 0: 세로 인덱스 0, 가로 인덱스 0인 요소 출력
    printf("%d\n", numArr[1][2]);    // 0: 세로 인덱스 1, 가로 인덱스 2인 요소 출력
    printf("%d\n", numArr[2][0]);    // 0: 세로 인덱스 2, 가로 인덱스 0인 요소 출력
    printf("%d\n", numArr[2][3]);    // 0: 세로 인덱스 2, 가로 인덱스 3인 요소 출력

    return 0;
}
