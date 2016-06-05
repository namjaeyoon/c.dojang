#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    register int num1 = 10;      // 변수 num1은 CPU의 레지스터를 사용

    printf("%d\n", num1);
    // printf("%p\n", &num1);    // 컴파일 에러. num1은 메모리에 없으므로 메모리 주소를 구할 수 없음
                                 // error C2103: 레지스터 변수에 '&'이(가) 있습니다.

    register int *numPtr = malloc(sizeof(int));

    // 레지스터 변수에 메모리 주소는 저장할 수 있으므로 역참조 연산자를 사용할 수 있음
    *numPtr = 20;
    printf("%d\n", *numPtr);     // 20

    free(numPtr);

    return 0;
}
