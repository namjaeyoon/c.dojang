#include <stdio.h>

int main()
{
    char *s1 = "Hello";    // 포인터에 문자열 Hello의 주소 저장
                           // Hello가 있는 메모리 주소는 읽기 전용

    s1[0] = 'A';           // 문자열 포인터의 인덱스 0에 문자 A를 할당
                           // 실행 에러

    printf("%c\n", s1[0]);

    return 0;
}
