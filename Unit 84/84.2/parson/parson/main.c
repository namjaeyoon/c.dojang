#include <stdio.h>
#include "parson.h"    // parson.h 헤더 파일 포함

int main()
{
    JSON_Value *rootValue;
    JSON_Object *rootObject;

    /* 초기화 */
    rootValue = json_parse_file("example.json");      // JSON 파일을 읽어서 파싱
    rootObject = json_value_get_object(rootValue);    // JSON_Value에서 JSON_Object를 얻음
    
    /* 사용 */
    // 객체에서 키에 해당하는 문자열을 가져옴
    printf("Title: %s\n", json_object_get_string(rootObject, "Title"));

    // 객체에서 키에 해당하는 숫자를 가져옴
    printf("Year: %d\n", (int)json_object_get_number(rootObject, "Year"));
    printf("Runtime %d\n", (int)json_object_get_number(rootObject, "Runtime"));

    // 객체에서 키에 해당하는 문자열을 가져옴
    printf("Genre: %s\n", json_object_get_string(rootObject, "Genre"));
    printf("Director: %s\n", json_object_get_string(rootObject, "Director"));

    printf("Actors:\n");
    // 객체에서 키에 해당하는 배열을 가져옴
    JSON_Array *array = json_object_get_array(rootObject, "Actors");
    for (int i = 0; i < json_array_get_count(array); i++)     // 배열의 요소 개수만큼 반복
    {
        // 배열에 인덱스를 지정하여 문자열을 가져옴
        printf("  %s\n", json_array_get_string(array, i));
    }

    // 객체에서 키에 해당하는 숫자를 가져옴
    printf("imdbRating: %f\n", json_object_get_number(rootObject, "imdbRating"));

    // 객체에서 키에 해당하는 불 값을 가져옴
    printf("KoreaRelease: %d\n", json_object_get_boolean(rootObject, "KoreaRelease"));

    /* 해제 */
    json_value_free(rootValue);    // JSON_Value에 할당된 동적 메모리 해제

    return 0;
}
