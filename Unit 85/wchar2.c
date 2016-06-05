#define _CRT_SECURE_NO_WARNINGS
#include <wchar.h>

int main()
{
    wchar_t ws1[20] = L"Hello, world!";
    wchar_t ws2[20];

    wprintf(L"%d\n", wcslen(ws1));

    // 리눅스에서는 %s 대신 %S 사용
    wcscat(ws1, L"123");
    wprintf(L"%s\n", ws1);

    wcscpy(ws2, ws1);
    wprintf(L"%s\n", ws2);

    wprintf(L"%d\n", wcscmp(ws1, ws2));

    wchar_t *ptr = wcschr(ws1, L'o');
    wprintf(L"%s\n", ptr);
    
    ptr = wcsrchr(ws1, L'l');
    wprintf(L"%s\n", ptr);

    ptr = wcsstr(ws1, L"wor");
    wprintf(L"%s\n", ptr);

    wchar_t ws3[20] = L"The Little Prince";
    wchar_t *next;
    ptr = wcstok(ws3, L" ", &next);    // next에는 다음번에 자를 문자열의 포인터가 들어감

    while (ptr != NULL)
    {
        wprintf(L"%s\n", ptr);
        ptr = wcstok(NULL, L" ", &next);
    }

    return 0;
}
