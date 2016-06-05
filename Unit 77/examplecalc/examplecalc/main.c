#include "calc.h"     // add, sub 함수가 선언된 헤더 파일. calcdata.h 헤더 파일을 포함하고 있음
#include "print.h"    // print 함수가 선언된 헤더 파일. calcdata.h 헤더 파일을 포함하고 있음

int main()
{
    CALC_DATA data1;
    data1.operand1 = 10;
    data1.operand2 = 20;

    add(&data1);      // 덧셈 실행
    print(&data1);    // 10 + 20 = 30

    CALC_DATA data2;
    data2.operand1 = 40;
    data2.operand2 = 15;

    sub(&data2);      // 뺄셈 실행
    print(&data2);    // 40 - 15 = 25

    return 0;
}
