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

    if (gender == 2)
        goto EXIT;    // 에러가 발생했으므로 EXIT로 이동

    if (age < 30)
        goto EXIT;    // 에러가 발생했으므로 EXIT로 이동

    if (isOwner == 0)
        goto EXIT;    // 에러가 발생했으므로 EXIT로 이동

EXIT:
    printf("안녕히계세요.\n");    // 에러 처리 코드를
    printf("문을 닫는다.\n");     // 한 번만 사용함

    return 0;    // 프로그램 종료
}
