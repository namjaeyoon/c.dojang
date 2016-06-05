#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    // 정수
    printf("%u\n", 10);      // 10: 부호 없는 10진 정수
    printf("%d\n", -20);     // -20: 부호 있는 10진 정수
    printf("%i\n", -20);     // -20: 부호 있는 10진 정수
    printf("%o\n", 071);     // 71: 부호 없는 8진 정수
    printf("%x\n", 0xF1);    // f1: 부호 없는 16진 정수(소문자)
    printf("%X\n", 0xF1);    // F1: 부호 없는 16진 정수(대문자)

    // long, long long 정수
    printf("%lu\n", ULONG_MAX);      // 4294967295: 부호 없는 long
    printf("%ld\n", LONG_MAX);       // 2147483647: 부호 있는 long
    printf("%llu\n", ULLONG_MAX);    // 18446744073709551615: 부호 없는 long long
    printf("%lld\n", LLONG_MAX);     // 9223372036854775807: 부호 있는 long long

    // 실수
    printf("%f\n", 1.2f);    // 1.200000: 실수를 소수점으로 표기(소문자)
    printf("%F\n", 1.2f);    // 1.200000: 실수를 소수점으로 표기(대문자)
    printf("%e\n", 1.2f);    // 1.200000e+00: 실수 지수 표기법 사용(소문자)
    printf("%E\n", 1.2f);    // 1.200000E+00: 실수 지수 표기법 사용(대문자)
    printf("%g\n", 1.2f);    // 1.2: %f와 %e 중에서 짧은 것을 사용(소문자)
    printf("%G\n", 1.2f);    // 1.2: %F와 %E 중에서 짧은 것을 사용(대문자)
    printf("%a\n", 1.2f);    // 0x1.3333340000000p+0: 실수를 16진법으로 표기(소문자)
    printf("%A\n", 1.2f);    // 0X1.3333340000000P+0: 실수를 16진법으로 표기(대문자)

    printf("%Lf", LDBL_MAX);    // 생략: long double
    printf("%Le", LDBL_MAX);    // 1.797693e+308: long double

    // 문자, 문자열
    printf("%c\n", 'a');    // a: 문자
    printf("%s\n", "Hello, world!");    // Hello, world!: 문자열

    // 포인터
    int num1;
    void *ptr = &num1;
    printf("%p\n", ptr);    // 008BFB6C: 포인터의 메모리 주소
                            // 0x8bfb6c: 리눅스, OS X에서는 앞에 0x가 붙고, A~F는 소문자로 출력
                            // 높은 자릿수의 0은 생략

    // % 기호
    printf("%%\n");    // %: % 기호 출력

    return 0;
}
