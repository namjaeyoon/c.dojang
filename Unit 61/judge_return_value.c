#include <stdio.h>
#include <stdbool.h>

/*_________________







_________________*/

int main()
{
    float armor;
    bool slow;

    armor = getArmor();
    slow = hasSlowSkill();

    printf("%f\n", armor);
    printf("%s\n", slow == true ? "true" : "false");

    return 0;
}
