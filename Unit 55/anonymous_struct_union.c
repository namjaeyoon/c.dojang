#include <stdio.h>

struct Vector3 { // 3차원 벡터 좌표
    union {          // 익명 공용체
        struct {         // 익명 구조체
            float x;         // x 좌표
            float y;         // y 좌표
            float z;         // z 좌표
        };
        float v[3];      // 좌표를 배열로 저장
    };
};

int main()
{
    struct Vector3 pos;

    for (int i = 0; i < 3; i++)    // 3번 반복
    {
        pos.v[i] = 1.0f;           // v는 배열이므로 인덱스로 접근 할 수 있음
    }

    printf("%f %f %f\n", pos.x, pos.y, pos.z);    // 1.000000 1.000000 1.000000: x, y, z로 접근

    return 0;
}
