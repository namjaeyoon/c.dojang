#include <stdio.h>

extern int num1;    // 다른 소스 파일(외부)에 있는 정적 전역 변수는 extern으로 사용할 수 없음
                    // 컴파일 에러

int main()
{
    printf("%d\n", num1);    // 정적 전역 변수 num1의 값 출력

    return 0;
}
