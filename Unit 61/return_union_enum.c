#include <stdio.h>

union Box {
    short candy;
    float snack;
    char doll[8];
};

enum BOX_TYPE {
    BOX_PAPER = 0,
    BOX_WOOD,
    BOX_PLASTIC
};

union Box getBox()    // Box 공용체를 반환하는 getBox 함수 정의
{
    union Box b;  // 공용체 변수 선언

    b.candy = 10;

    return b;     // 공용체 변수 반환
}

enum BOX_TYPE getBoxType()    // BOX_TYPE 열거형을 반환하는 getBoxType 함수 정의
{
    return BOX_WOOD;
}

int main()
{
    union Box box;
    enum BOX_TYPE boxType;

    box = getBox();        // 반환된 공용체 변수의 내용이 box로 모두 복사됨
    boxType = getBoxType();    // 반환된 열거형 값이 boxType에 저장됨

    printf("%d\n", box.candy);    // 10: getBox에서 저장한 값
    printf("%d\n", boxType);      //  1: getBoxType에서 반환한 BOX_WOOD

    return 0;
}
