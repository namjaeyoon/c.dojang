#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char phoneNumber[14];
    char name[10];

    fputs("전화번호를 입력하세요: ", stdout);
    scanf("%s", phoneNumber);    // scanf로 입력을 받음

    // scanf로 입력받은 다음에는 입력 버퍼에 \n이 남아있음
    
    fputs("이름을 입력하세요: ", stdout);
    fgets(name, sizeof(name), stdin);    // 입력 버퍼의 \n 때문에 fgets는 그냥 넘어감

    printf("전화번호: %s\n", phoneNumber);
    printf("이름: %s\n", name);

    return 0;
}
