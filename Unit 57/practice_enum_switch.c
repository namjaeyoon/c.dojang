#include <stdio.h>

enum VayneSkill {
    Tumble = 1,     // 구르기
    SilverBolts,    // 은화살
    Condemn,        // 선고
    FinalHour       // 결전의 시간
};

int main()
{
    enum VayneSkill skill;

    skill = Tumble;

    /*(1)_______*/
    {
    case /*(2)_____*/:
        printf("구르기\n");
        break;
    case /*(2)_____*/:
        printf("은화살\n");
        break;
    case /*(2)_____*/:
        printf("선고\n");
        break;
    case /*(2)_____*/:
        printf("결전의 시간\n");
        break;
    default:
        break;
    }

    return 0;
}
