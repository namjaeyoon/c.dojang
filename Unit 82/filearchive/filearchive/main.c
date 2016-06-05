#include <stdio.h>     // 파일 처리 함수가 선언된 헤더 파일
#include <string.h>    // strcmp 함수가 선언된 헤더 파일
#include "archive.h"
#include "command.h"

int main(int argc, char *argv[])
{
    // 실행 파일에 지정된 옵션이 없을 때 프로그램 사용 방법 출력
    if (argc == 1)
    {
        printf("filearchive <명령> <파일명>\n\n");
        printf("명령:\n");
        printf("    append   파일 추가\n");
        printf("    list     파일 목록 출력\n");
        printf("    extract  파일 추출\n");
        return 0;
    }

    // 초기화
    PARCHIVE archive = initialize();
    if (archive == NULL)
        return -1;

    char *command = argv[1];
    char *filename = argv[2];

    if (strcmp(command, "append") == 0)        // 파일 추가 명령
    {
        if (!isExist(archive, filename))       // 아카이브 파일에 추가할 파일이 있는지 검사
        {
            // 파일이 중복되지 않으면 새 파일 추가
            if (append(archive, filename) == -1)
            {
                printf("%s 파일 추가 실패\n", filename);
            }
        }
        else
        {
            printf("이미 %s 파일이 추가되어 있습니다.\n", filename);
        }
    }
    else if (strcmp(command, "list") == 0)      // 파일 목록 출력 명령
    {
        list(archive);
    }
    else if (strcmp(command, "extract") == 0)   // 파일 추출 명령
    {
        if (isExist(archive, filename))         // 아카이브 파일에 추출할 파일이 있는지 검사
        {
            // 아카이브 파일에 파일이 있으면 파일 추출
            if (extract(archive, filename) == -1)
            {
                printf("%s 파일 추출 실패\n", filename);
            }
        }
        else
        {
            printf("%s 파일이 없습니다.\n", filename);
        }
    }

    finalize(archive);    // 파일 포인터 닫기, 모든 동적 메모리 해제

    return 0;
}
