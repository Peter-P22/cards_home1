#include "manapool.h"

int can_put_card(struct card_t card_to_put, struct manapool_t pool){

if(card_to_put.mana <= pool.mana){
	return 1;
}else
	return 0;
}

int change_mana(struct manapool_t *manapool,int remove) {
	manapool-> mana += remove;
	if(manapool->mana > 10){
		manapool->mana =10;
	}if(manapool->mana < 0){
		manapool->mana = 0;
	}
}
int use_card(struct card_t card, struct manapool_t *pool){
	pool->mana=pool->mana - card.mana;
	
}
