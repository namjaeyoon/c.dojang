#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

int main()
{
    int num1;
    char s1[20];
    // 문자열은 버퍼의 크기를 넣어줌
    scanf_s("%d %s", &num1, s1, _countof(s1));
    printf("%d %s\n", num1, s1);

    wchar_t ws1[20];
    // wchar_t 문자열은 문자열의 개수를 넣어줌
    wscanf_s(L"%d %s", &num1, ws1, _countof(ws1));
    wprintf(L"%d %s\n", num1, ws1);

    sprintf_s(s1, _countof(s1), "%s", "Hello, world!");
    printf("%s\n", s1);

    swprintf_s(ws1, _countof(ws1), L"%s", L"Hello, world!");
    wprintf(L"%s\n", ws1);

    strcat_s(s1, _countof(s1), "123");
    printf("%s\n", s1);

    wcscat_s(ws1, _countof(ws1), L"123");
    wprintf(L"%s\n", ws1);

    char s2[20];
    wchar_t ws2[20];

    strcpy_s(s2, _countof(s2), s1);
    printf("%s\n", s2);

    wcscpy_s(ws2, _countof(ws2), ws1);
    wprintf(L"%s\n", ws2);
    
    char s3[20] = "The Little Prince";
    char *ptr1;
    char *next1;

    ptr1 = strtok_s(s3, " ", &next1);    // next1에는 다음번에 자를 문자열의 포인터가 들어감
    while (ptr1 != NULL)
    {
        printf("%s\n", ptr1);
        ptr1 = strtok_s(NULL, " ", &next1);
    }

    wchar_t ws3[20] = L"The Little Prince";
    wchar_t *ptr2;
    wchar_t *next2;

    ptr2 = wcstok_s(ws3, L" ", &next2);  // next2에는 다음번에 자를 문자열의 포인터가 들어감
    while (ptr2 != NULL)
    {
        wprintf(L"%s\n", ptr2);
        ptr2 = wcstok_s(NULL, L" ", &next2);
    }

    return 0;
}
