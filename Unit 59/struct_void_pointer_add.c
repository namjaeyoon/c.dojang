#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>    // memcpy 함수가 선언된 헤더 파일

struct Data {
    int num1;
    int num2;
};

int main()
{
    void *ptr = malloc(sizeof(struct Data) * 3);    // 구조체 3개 크기만큼 동적 메모리 할당
    struct Data d[3];

    ((struct Data *)ptr)->num1 = 10;        // 포인터 연산으로 메모리에 값 저장
    ((struct Data *)ptr)->num2 = 20;        // 포인터 연산으로 메모리에 값 저장

    ((struct Data *)ptr + 1)->num1 = 30;    // 포인터 연산으로 메모리에 값 저장
    ((struct Data *)ptr + 1)->num2 = 40;    // 포인터 연산으로 메모리에 값 저장

    ((struct Data *)ptr + 2)->num1 = 50;    // 포인터 연산으로 메모리에 값 저장
    ((struct Data *)ptr + 2)->num2 = 60;    // 포인터 연산으로 메모리에 값 저장

    memcpy(d, ptr, sizeof(struct Data) * 3);    // 동적 메모리가 구조체 배열의 형태와 같은지 
                                    // 확인하기 위해 동적 메모리의 내용을 구조체 배열에 복사

    printf("%d %d\n", d[1].num1, d[1].num2);    // 30 40: 구조체 배열의 멤버 출력
    printf("%d %d\n", ((struct Data *)ptr + 2)->num1, ((struct Data *)ptr + 2)->num2);
                                                // 50 60: 포인터 연산으로 메모리의 값 출력

    free(ptr);    // 동적 메모리 해제

    return 0;
}
