#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int gender;      // 성별: 남자 1, 여자 2
    int age;         // 나이
    int isOwner;     // 주택 소유 여부: 자가 1, 전월세 0

    scanf("%d %d %d", &gender, &age, &isOwner);

    printf("안녕하세요.\n");
    printf("문을 연다.\n");

    if (gender == 2)                  // 여자라면
    {
        printf("안녕히계세요.\n");    // 중복 코드
        printf("문을 닫는다.\n");     // 중복 코드
        return 0;                     // 프로그램 종료
    }

    if (age < 30)                     // 30세 미만이라면
    {
        printf("안녕히계세요.\n");    // 중복 코드
        printf("문을 닫는다.\n");     // 중복 코드
        return 0;                     // 프로그램 종료
    }

    if (isOwner == 0)                 // 전월세라면
    {
        printf("안녕히계세요.\n");    // 중복 코드
        printf("문을 닫는다.\n");     // 중복 코드
        return 0;                     // 프로그램 종료
    }

    return 0;    // 프로그램 종료
}
