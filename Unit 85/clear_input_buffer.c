#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void clearInputBuffer()
{
    // 입력 버퍼에서 문자를 계속 꺼내고 \n를 꺼내면 반복을 중단
    while (getchar() != '\n');
}

int main()
{
    char phoneNumber[14];
    char name[10];

    fputs("전화번호를 입력하세요: ", stdout);
    scanf("%s", phoneNumber);     // scanf로 입력을 받음
    clearInputBuffer();           // 입력 버퍼를 비움

    fputs("이름을 입력하세요: ", stdout);
    fgets(name, sizeof(name), stdin);    // fgets로 입력을 받을 수 있음

    printf("전화번호: %s\n", phoneNumber);
    printf("이름: %s\n", name);

    return 0;
}
