#include <stdio.h>
#define KO              // KO 매크로 정의
#include "message.h"    // message.h 헤더 파일 포함

int main()
{
    printf("%s\n", HELLO_MESSAGE);    // 안녕하세요: message.h에 정의한 HELLO_MESSAGE의 값이 출력됨
                                      // KO 매크로가 정의되어 있으므로 HELLO_MESSAGE는 "안녕하세요"가 됨

    return 0;
}
