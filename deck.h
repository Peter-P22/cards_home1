#ifndef _MY_DECK_
#define _MY_DECK_

#include "card.h"
#define DECK_MAX 30

struct deck_t{
    int size;
    struct card_t cards[30];
};

int push_card(struct card_t card,struct deck_t *deck);
int draw_card(struct deck_t *deck,struct card_t *card);
int look_card(struct deck_t *deck,struct card_t *card);

#endif
