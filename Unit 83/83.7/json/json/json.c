#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // 파일 처리 함수가 선언된 헤더 파일

int main()
{
    // JSON 문서에 저장할 데이터
    char *title = "Inception";
    int year = 2010;
    int runtime = 148;
    char *genre = "Sci-Fi";
    char *director = "Christopher Nolan";
    char actors[5][30] = {
        "Leonardo DiCaprio",
        "Joseph Gordon-Levitt",
        "Ellen Page",
        "Tom Hardy",
        "Ken Watanabe"
    };
    double imdbRating = 8.8;

    FILE *fp = fopen("example.json", "w");    // 쓰기 모드로 파일 열기

    // JSON 문법에 맞춰서 fprintf 함수로 값 출력
    fprintf(fp, "{\n");
    fprintf(fp, "  \"Title\": \"%s\",\n", title);
    fprintf(fp, "  \"Year\": %d,\n", year);
    fprintf(fp, "  \"Runtime\": %d,\n", runtime);
    fprintf(fp, "  \"Genre\": \"%s\",\n", genre);
    fprintf(fp, "  \"Director\": \"%s\",\n", director);
    fprintf(fp, "  \"Actors\": [\n");
    fprintf(fp, "    \"%s\", \n", actors[0]);
    fprintf(fp, "    \"%s\", \n", actors[1]);
    fprintf(fp, "    \"%s\", \n", actors[2]);
    fprintf(fp, "    \"%s\", \n", actors[3]);
    fprintf(fp, "    \"%s\" \n", actors[4]);
    fprintf(fp, "  ],\n");
    fprintf(fp, "  \"imdbRating\": %.1f\n", imdbRating);
    fprintf(fp, "}\n");

    fclose(fp);    // 파일 닫기

    return 0;
}
