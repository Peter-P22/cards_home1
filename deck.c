#include "deck.h"

int push_card(struct card_t card,struct deck_t *deck){
    if(deck->size < DECK_MAX){
        deck->cards[deck->size++] = card;
        return 0;
    } else
        return -1;
}

int draw_card(struct deck_t *deck,struct card_t *card){
    if(deck->size > 0){
        card = &deck->cards[--deck->size];
        return 0;
    } else
        return -1;
}

int look_card(struct deck_t *deck,struct card_t *card){
    if(deck->size > 0){
        card = &deck->cards[deck->size - 1];
        return 0;
    } else
        return -1;
}
