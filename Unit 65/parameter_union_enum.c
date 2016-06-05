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

void printBox(union Box box)    // 반환값 없음, 공용체 매개변수 한 개 지정
{
    printf("%d\n", box.candy);
}

void printBoxType(enum BOX_TYPE boxType)    // 반환값 없음, 열거형 매개변수 한 개 지정
{
    printf("%d\n", boxType);
}

int main()
{
    union Box box;
    enum BOX_TYPE boxType;

    box.candy = 10;
    boxType = BOX_PLASTIC;

    printBox(box);            // 10: 함수를 호출할 때 공용체 변수 전달
    printBoxType(boxType);    //  2: 함수를 호출할 때 열거형 값 전달

    return 0;
}
