#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    int size;

    scanf("%d", &size);

    int *numPtr = malloc(sizeof(int) * size);    // (int 크기 * 입력받은 크기)만큼 동적 메모리 할당

    for (int i = 0; i < size; i++)    // 입력받은 크기만큼 반복
    {
        numPtr[i] = i;                // 인덱스로 접근하여 값 할당
    }

    for (int i = 0; i < size; i++)    // 입력받은 크기만큼 반복
    {
        printf("%d\n", numPtr[i]);    // 인덱스로 접근하여 값 출력
    }

    free(numPtr);    // 동적으로 할당한 메모리 해제

    return 0;
}
