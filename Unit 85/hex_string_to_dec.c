#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char hexadecimal[20] =  "12C";    // 16진수로 된 문자열
    int decimal = 0;                  // 10진수를 저장할 변수

    int position = 0;
    for (int i = strlen(hexadecimal) - 1; i >= 0; i--)    // 문자열을 역순으로 반복
    {
        char ch = hexadecimal[i];         // 각 자릿수에 해당하는 문자를 얻음

        if (ch >= 48 && ch <= 57)         // 문자가 0~9이면(ASCII 코드 48~57)
        {
            // 문자에서 0에 해당하는 ASCII 코드 값을 빼고
            // 16에 자릿수를 거듭제곱한 값을 곱함
            decimal += (ch - 48) * pow(16, position);
        }
        else if (ch >= 65 && ch <= 70)    // 문자가 A~F이면(ASCII 코드 65~70)
        {                                 // 대문자로 된 16진수의 처리
            // 문자에서 (A에 해당하는 ASCII 코드 값 - 10)을 빼고
            // 16에 자릿수를 거듭제곱한 값을 곱함
            decimal += (ch - (65 - 10)) * pow(16, position);
        }
        else if (ch >= 97 && ch <= 102)   // 문자가 a~f이면(ASCII 코드 97~102)
        {                                 // 소문자로 된 16진수의 처리
            // 문자에서 (a에 해당하는 ASCII 코드 값 - 10)을 빼고
            // 16에 자릿수를 거듭제곱한 값을 곱함
            decimal += (ch - (97 - 10)) * pow(16, position);
        }

        position++;
    }

    printf("%d\n", decimal);    // 300

    return 0;
}
