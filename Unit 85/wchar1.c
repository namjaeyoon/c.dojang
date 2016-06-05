#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <wchar.h>

int main()
{
    wchar_t ws1[20];
    wscanf(L"%s", ws1);
    wprintf(L"%s\n", ws1);

    // 두 번째 인수에는 wchar_t 문자열의 문자 개수를 구해서 넣어줌
    swprintf(ws1, sizeof(ws1) / sizeof(wchar_t), L"%s", L"Hello, world!");

    FILE *fp = _wfopen(L"hello.txt", L"w+");
    // _wfopen 함수는 표준이 아니므로 리눅스에서는 사용할 수 없음
    // 리눅스에서는 fopen 함수 사용
    // FILE *fp = fopen("hello.txt", "w+");

    // 리눅스에서는 %s 대신 %S 사용
    wchar_t ws2[20];
    wchar_t ws3[20];
    fwprintf(fp, L"%s", L"C Language");
    rewind(fp);
    fwscanf(fp, L"%s %s", ws2, ws3);
    wprintf(L"%s %s\n", ws2, ws3);

    rewind(fp);
    fputws(L"Wide Character", fp);
    rewind(fp);
    fgetws(ws2, 20, fp);
    wprintf(L"%s\n", ws2);

    rewind(fp);
    fputwc(L'X', fp);
    rewind(fp);
    wint_t wc1 = fgetwc(fp);
    putwchar(wc1);

    fclose(fp);

    return 0;
}
