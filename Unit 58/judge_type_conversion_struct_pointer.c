#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stats {
    float health;
    float healthRegen;
    unsigned int mana;
    float manaRegen;
    float range;
    float attackDamage;
    float armor;
    float attackSpeed;
    float magicResist;
    unsigned int movementSpeed;
};

int main()
{
    void *ptr = malloc(sizeof(struct Stats));
    struct Stats st;

    scanf("%u %u", &st.mana, &st.movementSpeed);

    memcpy(ptr, &st, sizeof(struct Stats));
    st.mana = 0;
    st.movementSpeed = 0;

    /*__________________________________________________
    __________________________________________________*/

    free(ptr);

    return 0;
}
