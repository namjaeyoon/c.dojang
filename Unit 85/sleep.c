#define _CRT_OBSOLETE_NO_WARNINGS    // 구식 함수를 사용했을 때 발생하는 에러 방지
#include <stdio.h>
#include <stdlib.h>      // _sleep 함수가 선언된 헤더 파일
#include <string.h>
//#include <unistd.h>    // 리눅스에서 usleep 함수가 선언된 헤더 파일

int main()
{
    char *script = "There is no place like home.\nThe Wizard of Oz";
    int length = strlen(script);

    for (int i = 0; i < length; i++)
    {
        printf("%c", script[i]);
        // fflush(stdout);    // 리눅스에서는 문자 하나씩 출력한 뒤 usleep으로 기다리려면
        // 출력 버퍼를 비워야 함
        // usleep(500000);    // 리눅스에서 0.5초를 기다릴 때(-std=gnu99 옵션 사용)
        _sleep(500);          // 0.5초
    }

    return 0;
}
