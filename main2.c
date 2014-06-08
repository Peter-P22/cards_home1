#include <stdio.h>
#include "deck.h"
#include "card.h"

char* card1_name = "Dragon";
char* card2_name = "Sheep";

int main()
{
    struct deck_t deck;
    struct card_t card;

    deck.size = 0;
    card.name = card1_name;

    push_card(card,&deck);
    printf("%s\n",deck.cards[deck.size - 1].name);

    card.name = card2_name;

    push_card(card,&deck);
    printf("%s\n",deck.cards[deck.size - 1].name);

    printf("----Perform pop/draw_card on the deck----\n");

    draw_card(&deck,&card);
    printf("%s\n",deck.cards[deck.size - 1].name);



    return 0;
}
