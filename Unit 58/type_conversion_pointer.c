#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    int *numPtr = malloc(sizeof(int));    // 4바이트만큼 메모리 할당
    char *cPtr;

    *numPtr = 0x12345678;

    cPtr = (char *)numPtr;     // int 포인터 numPtr을 char 포인터로 변환. 메모리 주소만 저장됨

    printf("0x%x\n", *cPtr);   // 0x78: 낮은 자릿수 1바이트를 가져오므로 0x78

    free(numPtr);    // 동적 메모리 해제

    return 0;
}
