#include "calc.h"    // CALC_DATA 구조체를 사용하기 위해 calc.h 헤더 파일 포함
                     // calc.h가 calcdata.h를 포함하고 있음

void add(CALC_DATA *data)    // 덧셈 함수 정의
{
    data->operator = '+';    // 연산자 문자 + 저장
    
    // 계산할 값 두 개를 더해서 결과 저장
    data->result = data->operand1 + data->operand2;
}

void sub(CALC_DATA *data)    // 뺄셈 함수 정의
{
    data->operator = '-';    // 연산자 문자 - 저장

    // 계산할 값 두 개의 차를 구해서 결과 저장
    data->result = data->operand1 - data->operand2;
}
