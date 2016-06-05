#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char buffer[100] = { 0, };
    int c1 = 0;

    FILE *fp = fopen("hello.txt", "w+");    // 파일을 읽기/쓰기 모드로 열기

    for (int i = 0; i < 10; i++)    // 10번 반복하면서
        fputc('a', fp);             // 파일에 문자 a를 쓰기

    rewind(fp);    // 파일 포인터를 파일의 처음으로 이동시킴
    while (1)
    {
        c1 = fgetc(fp);    // 파일에서 문자를 읽음
        if (feof(fp))      // 파일 포인터가 파일의 끝에 있으면
            break;         // 반복을 끝냄

        putchar(c1);       // 문자 출력
    }

    fclose(fp);

    return 0;
}
