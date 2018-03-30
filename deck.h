#ifndef _DECK_H_
#define _DECK_H_

#include "card.h"

class Deck
{
public:
	Deck();

	void shuffle();
	const Card& getTopCard();

private:
	Deck(Deck&);

	Card cardSet[52];
	int topCardId;
};

#endif
