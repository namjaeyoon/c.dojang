#ifndef FILE_H    // FILE_H가 정의되어 있지 않다면
#define FILE_H    // FILE_H 매크로정의

#include <stdio.h>     // 파일 처리 함수가 선언된 헤더 파일
#include <stdint.h>    // 크기별로 정수 자료형이 정의된 헤더 파일

uint32_t getFileSize(FILE *fp);    // 파일의 크기를 구하는 함수

#endif            // #ifndef FILE_H 끝
