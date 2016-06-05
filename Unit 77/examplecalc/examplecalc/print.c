#include <stdio.h>    // printf 함수가 선언된 헤더 파일
#include "print.h"    // CALC_DATA 구조체를 사용하기 위해 print.h 헤더 파일 포함
                      // print.h가 calcdata.h를 포함하고 있음

void print(CALC_DATA *data)    // 결과 출력 함수 정의
{
    printf("%d %c %d = %d\n",
        data->operand1,    // 계산할 값1
        data->operator,    // 계산할 값2
        data->operand2,    // 연산자 문자
        data->result       // 계산 결과
    );
}
