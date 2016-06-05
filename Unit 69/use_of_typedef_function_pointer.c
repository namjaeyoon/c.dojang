#include <stdio.h>

int add(int a, int b)    // int형 반환값, int형 매개변수 두 개
{
    return a + b;
}

typedef int (*FP)(int, int);    // FP를 함수 포인터 별칭으로 정의

struct Calc {
    FP fp;    // 함수 포인터 별칭을 구조체 멤버 자료형으로 사용
};

void executer(FP fp)    // 함수 포인터 별칭을 매개변수 자료형으로 사용
{
    printf("%d\n", fp(70, 80));
}

int main()
{
    FP fp1;      // 함수 포인터 별칭으로 변수 선언
    fp1 = add;
    printf("%d\n", fp1(10, 20));     // 30

    FP fp[10];   // 함수 포인터 별칭으로 배열 선언
    fp[0] = add;
    printf("%d\n", fp[0](30, 40));   // 70

    struct Calc c;
    c.fp = add;
    printf("%d\n", c.fp(50, 60));    // 110
    
    executer(add);    // 150: executer를 호출할 때 add 함수의 메모리 주소를 전달

    return 0;
}
