#include "card.h"

int attack(struct card_t *attacker,struct card_t *defender){
    attacker->health -= defender->attack;
    defender->health -= attacker->attack;
    if(defender->health <= 0 && attacker->health <= 0){
        return 0;
    }
    if(defender->health <= 0 && attacker->health > 0){
        return 1;
    }
    if(attacker->health <= 0 && defender->health > 0){
        return 2;
    }
    if(defender->health > 0 && attacker->health > 0){
        return 3;
    }
    return -1;
}
