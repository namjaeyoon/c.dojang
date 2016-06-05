#include <stdio.h>

enum LuxSkill {
    LightBinding = 1,
    PrismaticBarrier,
    LucentSingularity,
    FinalSpark
};

int main()
{
    enum LuxSkill skill;     // 열거형 변수 선언

    skill = LightBinding;    // 열거형 값 할당

    switch (skill)
    {
    case LightBinding:         // 열거형 값이 LightBinding일 때
        printf("LightBinding\n");
        break;
    case PrismaticBarrier:     // 열거형 값이 PrismaticBarrier일 때
        printf("PrismaticBarrier\n");
        break;
    case LucentSingularity:    // 열거형 값이 LucentSingularity일 때
        printf("LucentSingularity\n");
        break;
    case FinalSpark:           // 열거형 값이 FinalSpark일 때
        printf("FinalSpark\n");
        break;
    default:
        break;
    }

    return 0;
}
