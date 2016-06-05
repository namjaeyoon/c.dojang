#define _CRT_SECURE_NO_WARNINGS    // strtok 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>

int main()
{
    char text[100] = "this is c language";
    char *tokens[30] = { NULL, };    // 자른 문자열의 포인터를 보관할 배열, NULL로 초기화
    int count = 0;   // 자른 문자열 개수

    char *ptr = strtok(text, " ");   // " " 공백 문자를 기준으로 문자열을 자름, 포인터 반환

    while (ptr != NULL)            // 자른 문자열이 나오지 않을 때까지 반복
    {
        tokens[count] = ptr;       // 문자열을 자른 뒤 메모리 주소를 문자열 포인터 배열에 저장
        count++;                   // 인덱스 증가

        ptr = strtok(NULL, " ");   // 다음 문자열을 잘라서 포인터를 반환
    }

    // 2-gram이므로 배열의 마지막에서 요소 한 개 앞까지만 반복함
    for (int i = 0; i < count - 1; i++)
    {
        printf("%s %s\n", tokens[i], tokens[i + 1]);    // 현재 문자열과 그 다음 문자열 출력
    }

    return 0;
}
