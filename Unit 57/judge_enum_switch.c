#include <stdio.h>

enum MasterYiSkill {
    AlphaStrike = 1,
    Meditation,
    WujuStyle,
    Highlander
};

int main()
{
    /*_______________________


    _______________________*/

    switch (skill)
    {
    case AlphaStrike:
        printf("일격 필살\n");
        break;
    case Meditation:
        printf("명상\n");
        break;
    case WujuStyle:
        printf("우주류 검술\n");
        break;
    case Highlander:
        printf("최후의 전사\n");
        break;
    default:
        break;
    }

    return 0;
}
