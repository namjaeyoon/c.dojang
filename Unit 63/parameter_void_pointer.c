#include <stdio.h>

enum TYPE {
    TYPE_CHAR,
    TYPE_INT,
    TYPE_FLOAT
};

void swapValue(void *ptr1, void *ptr2, enum TYPE t)    // 반환값 없음, void 포인터 매개변수 두 개와
{                                                      // 변수의 자료형을 알려줄 열거형을 받음
    switch (t)
    {
    case TYPE_CHAR:    // 문자면 char *로 변환한 뒤 역참조하여 값을 서로 바꿈
    {
        char temp;
        temp = *(char *)ptr1;
        *(char *)ptr1 = *(char *)ptr2;
        *(char *)ptr2 = temp;
        break;
    }
    case TYPE_INT:     // 정수면 int *로 변환한 뒤 역참조하여 값을 서로 바꿈
    {
        int temp;
        temp = *(int *)ptr1;
        *(int *)ptr1 = *(int *)ptr2;
        *(int *)ptr2 = temp;
        break;
    }
    case TYPE_FLOAT:   // 실수면 float *로 변환한 뒤 역참조하여 값을 서로 바꿈
    {
        float temp;
        temp = *(float *)ptr1;
        *(float *)ptr1 = *(float *)ptr2;
        *(float *)ptr2 = temp;
        break;
    }
    }
}

int main()
{
    char c1 = 'a';
    char c2 = 'b';
    swapValue(&c1, &c2, TYPE_CHAR);       // 변수의 메모리 주소와 TYPE_CHAR를 넣음
    printf("%c %c\n", c1, c2);            // b a: swapValue에 의해서 값이 서로 바뀜

    int num1 = 10;
    int num2 = 20;
    swapValue(&num1, &num2, TYPE_INT);    // 변수의 메모리 주소와 TYPE_INT를 넣음
    printf("%d %d\n", num1, num2);        // 20 10: swapValue에 의해서 값이 서로 바뀜

    float num3 = 1.234567f;
    float num4 = 7.654321f;
    swapValue(&num3, &num4, TYPE_FLOAT);  // 변수의 메모리 주소와 TYPE_FLOAT를 넣음
    printf("%f %f\n", num3, num4);        // 7.654321f 1.234567: 
                                          // swapValue에 의해서 값이 서로 바뀜

    return 0;
}
