#include <stdio.h>     // 파일 처리 함수가 선언된 헤더 파일
#include <stdint.h>    // 크기별로 정수 자료형이 정의된 헤더 파일

uint32_t getFileSize(FILE *fp)    // 파일의 크기를 구하는 함수 정의
{
    uint32_t size;
    uint32_t currPos = ftell(fp);    // 현재 파일 포인터의 위치 저장

    // 파일의 끝으로 이동하여 파일 크기를 구함
    fseek(fp, 0, SEEK_END);
    size = ftell(fp);

    fseek(fp, currPos, SEEK_SET);    // 파일 포인터를 이전 위치로 되돌림

    return size;
}
