#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    int *numPtr = malloc(sizeof(int));    // 4바이트만큼 메모리 할당
    char *cPtr;

    *numPtr = 0x12345678;

    printf("0x%x\n", *(char *)numPtr);    // 0x78: numPtr1을 char 포인터로 변환한 뒤 역참조

    free(numPtr);    // 동적 메모리 해제

    return 0;
}
