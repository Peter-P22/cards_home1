#include "manapool.h"

int can_put_card(struct card_t card_to_put, struct manapool_t pool){

if(card_to_put.mana <= pool.mana)
return 1;
return 0;
}

int changing_mana(struct manapool_t *manapool,int remove) {
	manapool-> mana += remove;
}
