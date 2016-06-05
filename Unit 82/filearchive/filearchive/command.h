#ifndef COMMAND_H    // COMMAND_H가 정의되어 있지 않다면
#define COMMAND_H    // COMMAND_H 매크로정의

#include "archive.h"

int append(PARCHIVE archive, char *filename);     // 파일 추가 함수
void list(PARCHIVE archive);                      // 파일 목록 출력 함수
int extract(PARCHIVE archive, char *filename);    // 파일 추출 함수

#endif               // #ifndef COMMAND_H 끝
