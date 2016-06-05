#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>    // memcpy 함수가 선언된 헤더 파일

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D *p1 = malloc(sizeof(struct Point2D));
    struct Point2D *p2 = malloc(sizeof(struct Point2D));

    p1->x = 10;    // p1의 멤버에만 값 저장
    p1->y = 20;    // p1의 멤버에만 값 저장

    memcpy(p2, p1, sizeof(struct Point2D));    // Point2D 구조체 크기만큼 p1의 내용을 p2로 복사

    printf("%d %d\n", p2->x, p2->y);    // 10 20: p1의 내용을 p2로 복사했으므로 10 20

    free(p2);
    free(p1);

    return 0;
}
