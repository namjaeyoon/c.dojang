#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
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

struct Champion {
    char name[20];
    /*_______________*/
    float abilityPower;
};

int main()
{
    struct Champion lux;

    strcpy(lux.name, "Lux");
    lux.stats.health = 477.72f;
    lux.stats.healthRegen = 1.08f;
    lux.stats.mana = 334;
    lux.stats.manaRegen = 1.24f;
    lux.stats.range = 550;
    lux.stats.attackDamage = 55.5f;
    lux.stats.attackSpeed = 0.625f;
    lux.stats.armor = 18.72f;
    lux.stats.magicResist = 30;
    lux.stats.movementSpeed = 330;
    lux.abilityPower = 0;
    
    printf("%u %f\n", lux.stats.mana, lux.stats.manaRegen);

    return 0;
}
