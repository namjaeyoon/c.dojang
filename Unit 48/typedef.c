#include <stdio.h>

int main()
{
    typedef int MYINT;      // int를 별칭 MYINT로 정의
    typedef int* PMYINT;    // int 포인터를 별칭 PMYINT로 정의

    MYINT num1;        // MYINT로 변수 선언
    PMYINT numPtr1;    // PMYINT로 포인터 변수 선언

    numPtr1 = &num1;   // 포인터에 변수의 주소 저장
                       // 사용 방법은 일반 변수, 포인터와 같음

    return 0;
}
