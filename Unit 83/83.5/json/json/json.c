#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // 파일 처리 함수가 선언된 헤더 파일
#include <stdlib.h>    // malloc, free, atof 함수가 선언된 헤더 파일
#include <stdbool.h>   // bool, true, false가 정의된 헤더 파일
#include <string.h>    // strchr, memset, memcpy 함수가 선언된 헤더 파일

// 토큰 종류 열거형
typedef enum _TOKEN_TYPE {
    TOKEN_STRING,    // 문자열 토큰
    TOKEN_NUMBER,    // 숫자 토큰
} TOKEN_TYPE;

// 토큰 구조체
typedef struct _TOKEN {
    TOKEN_TYPE type;   // 토큰 종류
    union {            // 두 종류 중 한 종류만 저장할 것이므로 공용체로 만듦
        char *string;     // 문자열 포인터
        double number;    // 실수형 숫자
    };
    bool isArray;      // 현재 토큰이 배열인지 표시
} TOKEN;

#define TOKEN_COUNT 20    // 토큰의 최대 개수

// JSON 구조체
typedef struct _JSON {
    TOKEN tokens[TOKEN_COUNT]; // 토큰 배열
} JSON;

char *readFile(char *filename, int *readSize)    // 파일을 읽어서 내용을 반환하는 함수
{
    FILE *fp = fopen(filename, "rb");
    if (fp == NULL)
        return NULL;

    int size;
    char *buffer;

    // 파일 크기 구하기
    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    // 파일 크기 + NULL 공간만큼 메모리를 할당하고 0으로 초기화
    buffer = malloc(size + 1);
    memset(buffer, 0, size + 1);

    // 파일 내용 읽기
    if (fread(buffer, size, 1, fp) < 1)
    {
        *readSize = 0;
        free(buffer);
        fclose(fp);        
        return NULL;
    }

    // 파일 크기를 넘겨줌
    *readSize = size;

    fclose(fp);    // 파일 포인터 닫기

    return buffer;
}

void parseJSON(char *doc, int size, JSON *json)    // JSON 파싱 함수
{
    int tokenIndex = 0;    // 토큰 인덱스
    int pos = 0;           // 문자 검색 위치를 저장하는 변수

    if (doc[pos] != '{')   // 문서의 시작이 {인지 검사
        return;

    pos++;    // 다음 문자로

    while (pos < size)       // 문서 크기만큼 반복
    {
        switch (doc[pos])    // 문자의 종류에 따라 분기
        {
        case '"':            // 문자가 "이면 문자열
        {
            // 문자열의 시작 위치를 구함. 맨 앞의 "를 제외하기 위해 + 1
            char *begin = doc + pos + 1;

            // 문자열의 끝 위치를 구함. 다음 "의 위치
            char *end = strchr(begin, '"');
            if (end == NULL) // "가 없으면 잘못된 문법이므로 
                break;       // 반복을 종료

            int stringLength = end - begin;    // 문자열의 실제 길이는 끝 위치 - 시작 위치

            // 토큰 배열에 문자열 저장
            // 토큰 종류는 문자열
            json->tokens[tokenIndex].type = TOKEN_STRING;
            // 문자열 길이 + NULL 공간만큼 메모리 할당
            json->tokens[tokenIndex].string = malloc(stringLength + 1);
            // 할당한 메모리를 0으로 초기화
            memset(json->tokens[tokenIndex].string, 0, stringLength + 1);

            // 문서에서 문자열을 토큰에 저장
            // 문자열 시작 위치에서 문자열 길이만큼만 복사
            memcpy(json->tokens[tokenIndex].string, begin, stringLength);

            tokenIndex++;    // 토큰 인덱스 증가

            pos = pos + stringLength + 1;    // 현재 위치 + 문자열 길이 + "(+ 1)
        }
        break;
        case '[':            // 문자가 [이면 배열
        {
            pos++;           // 다음 문자로

            while (doc[pos] != ']')    // 닫는 ]가 나오면 반복 종료
            {
                // 여기서는 문자열만 처리
                if (doc[pos] == '"')   // 문자가 "이면 문자열
                {
                    // 문자열의 시작 위치를 구함. 맨 앞의 "를 제외하기 위해 + 1
                    char *begin = doc + pos + 1;

                    // 문자열의 끝 위치를 구함. 다음 "의 위치
                    char *end = strchr(begin, '"');
                    if (end == NULL)   // "가 없으면 잘못된 문법이므로
                        break;         // 반복을 종료

                    int stringLength = end - begin;    // 문자열의 실제 길이는 끝 위치 - 시작 위치

                    // 토큰 배열에 문자열 저장
                    // 토큰 종류는 문자열
                    json->tokens[tokenIndex].type = TOKEN_STRING;
                    // 문자열 길이 + NULL 공간만큼 메모리 할당
                    json->tokens[tokenIndex].string = malloc(stringLength + 1);
                    // 현재 문자열은 배열의 요소
                    json->tokens[tokenIndex].isArray = true;
                    // 할당한 메모리를 0으로 초기화
                    memset(json->tokens[tokenIndex].string, 0, stringLength + 1);

                    // 문서에서 문자열을 토큰에 저장
                    // 문자열 시작 위치에서 문자열 길이만큼만 복사
                    memcpy(json->tokens[tokenIndex].string, begin, stringLength);

                    tokenIndex++;    // 토큰 인덱스 증가

                    pos = pos + stringLength + 1;    // 현재 위치 + 문자열 길이 + "(+ 1)
                }

                pos++;    // 다음 문자로
            }
        }
        break;
        case '0': case '1': case '2': case '3': case '4': case '5':    // 문자가 숫자이면
        case '6': case '7': case '8': case '9': case '-':              // -는 음수일 때
        {
            // 문자열의 시작 위치를 구함
            char *begin = doc + pos;
            char *end;
            char *buffer;

            // 문자열의 끝 위치를 구함. ,가 나오거나
            end = strchr(doc + pos, ',');
            if (end == NULL)
            {
                // }가 나오면 문자열이 끝남
                end = strchr(doc + pos, '}');
                if (end == NULL)    // }가 없으면 잘못된 문법이므로
                    break;          // 반복을 종료
            }

            int stringLength = end - begin;    // 문자열의 실제 길이는 끝 위치 - 시작 위치

            // 문자열 길이 + NULL 공간만큼 메모리 할당
            buffer = malloc(stringLength + 1);
            // 할당한 메모리를 0으로 초기화
            memset(buffer, 0, stringLength + 1);

            // 문서에서 문자열을 버퍼에 저장
            // 문자열 시작 위치에서 문자열 길이만큼만 복사
            memcpy(buffer, begin, stringLength);

            // 토큰 종류는 숫자
            json->tokens[tokenIndex].type = TOKEN_NUMBER;  
            // 문자열을 숫자로 변환하여 토큰에 저장
            json->tokens[tokenIndex].number = atof(buffer);

            free(buffer);    // 버퍼 해제

            tokenIndex++;    // 토큰 인덱스 증가

            pos = pos + stringLength + 1;    // 현재 위치 + 문자열 길이 + , 또는 }(+ 1)
        }
        break;
        }

        pos++; // 다음 문자로
    }
}

void freeJSON(JSON *json) // JSON 해제 함수
{
    for (int i = 0; i < TOKEN_COUNT; i++) // 토큰 개수만큼 반복
    {
        if (json->tokens[i].type == TOKEN_STRING) // 토큰 종류가 문자열이면
            free(json->tokens[i].string);         // 동적 메모리 해제
    }
}

int main()
{
    int size;    // 문서 크기

    // 파일에서 JSON 문서를 읽음, 문서 크기를 구함
    char *doc = readFile("example.json", &size);
    if (doc == NULL)
        return -1;

    JSON json = { 0, };    // JSON 구조체 변수 선언 및 초기화

    parseJSON(doc, size, &json);    // JSON 문서 파싱

    printf("Title: %s\n", json.tokens[1].string);        // 토큰에 저장된 문자열 출력(Title)
    printf("Year: %d\n", (int)json.tokens[3].number);    // 토큰에 저장된 숫자 출력(Year)
    printf("Runtime: %d\n", (int)json.tokens[5].number); // 토큰에 저장된 숫자 출력(Runtime)
    printf("Genre: %s\n", json.tokens[7].string);        // 토큰에 저장된 문자열 출력(Genre)
    printf("Director: %s\n", json.tokens[9].string);     // 토큰에 저장된 문자열 출력(Director)
    printf("Actors:\n");
    printf("  %s\n", json.tokens[11].string);            // 토큰에 저장된 문자열 출력(Actors 배열의 요소)
    printf("  %s\n", json.tokens[12].string);            // 토큰에 저장된 문자열 출력(Actors 배열의 요소)
    printf("  %s\n", json.tokens[13].string);            // 토큰에 저장된 문자열 출력(Actors 배열의 요소)
    printf("  %s\n", json.tokens[14].string);            // 토큰에 저장된 문자열 출력(Actors 배열의 요소)
    printf("  %s\n", json.tokens[15].string);            // 토큰에 저장된 문자열 출력(Actors 배열의 요소)
    printf("imdbRating: %f\n", json.tokens[17].number);  // 토큰에 저장된 숫자 출력(imdbRating)

    freeJSON(&json);    // json 안에 할당된 동적 메모리 해제

    free(doc);    // 문서 동적 메모리 해제

    return 0;
}
