#include <stdio.h>
#include <stdbool.h>

/*(1)_________________

____________________*/

/*(2)_________________

____________________*/

/*(3)_________________

____________________*/

int main()
{
    int mana;
    float attackSpeed;
    bool melee;

    mana = getMana();
    attackSpeed = getAttackSpeed();
    melee = isMelee();

    printf("%d\n", mana);
    printf("%f\n", attackSpeed);
    printf("%d\n", melee);

    return 0;
}
