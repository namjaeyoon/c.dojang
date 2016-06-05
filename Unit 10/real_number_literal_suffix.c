#include <stdio.h>

int main()
{
    printf("%f\n", 0.1f);     // 0.100000: float 크기의 실수 리터럴
    printf("%f\n", 0.1F);     // 0.100000: float 크기의 실수 리터럴
    printf("%f\n", 0.1);      // 0.100000: double 크기의 실수 리터럴
    printf("%Lf\n", 0.1l);    // 0.100000: long double 크기의 실수 리터럴
    printf("%Lf\n", 0.1L);    // 0.100000: long double 크기의 실수 리터럴

    printf("%f\n", 1.0e-5f);     // 0.000010: float 크기의 실수 리터럴
    printf("%f\n", 1.0e-5F);     // 0.000010: float 크기의 실수 리터럴
    printf("%f\n", 1.0e-5);      // 0.000010: double 크기의 실수 리터럴
    printf("%Lf\n", 1.0e-5l);    // 0.000010: long double 크기의 실수 리터럴
    printf("%Lf\n", 1.0e-5L);    // 0.000010: long double 크기의 실수 리터럴

    return 0;
}
