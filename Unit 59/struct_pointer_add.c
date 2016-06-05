#include <stdio.h>

struct Data {
    int num1;
    int num2;
};

int main()
{
    struct Data d[3] = { { 10, 20 }, { 30, 40 }, { 50, 60 } };    // 구조체 배열 선언과 값 초기화
    struct Data *ptr;    // 구조체 포인터 선언

    ptr = d;    // 구조체 배열 첫 번째 요소의 메모리 주소를 포인터에 저장

    printf("%d %d\n", (ptr + 1)->num1, (ptr + 1)->num2);    // 30 40: 구조체 배열에서 멤버의 값 출력
                                                            // d[1].num1, d[1].num2와 같음

    printf("%d %d\n", (ptr + 2)->num1, (ptr + 2)->num2);    // 50 60: 구조체 배열에서 멤버의 값 출력
                                                            // d[2].num1, d[2].num2와 같음

    return 0;
}
