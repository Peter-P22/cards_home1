#include <stdio.h>
#define CARD1_NAME "dragon"
#define CARD2_NAME "sheep" 
#include "card.c"

int main () {
    
    struct card_t card1;
    struct card_t card2;
    
    card1.name = CARD1_NAME;
    card1.attack = 3;
    card1.health = 3;

card2.name = CARD2_NAME;
    card2.attack = 1;
    card2.health = 1;

    switch(attack(&card1,&card2)){
        case 0: printf("Both cards were destroyed!\n");
        break;

        case 1: printf("%s wins !\n",card1.name);
        break;

        case 2: printf("%s wins !\n",card2.name);
        break;

        case 3: printf("Both cards survived !\n");
        break;

        default: printf("Error\n");
        break;
    }
    return 0;
}
