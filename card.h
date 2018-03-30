#ifndef _CARD_H_
#define _CARD_H_
#include <String>

class Card
{
public:	
	enum Rank
	{
		ACE = 1;
		TWO = 2;
		THREE = 3;
		FOUR = 4;
		FIVE = 5;
		SIX = 6;
		SEVEN = 7;
		EIGHT = 8;
		NINE = 9;
		TEN = 10;
		JACK = 11;
		QUEEN = 12;
		KING = 13;
	};
	enum Suite
	{
		SPADE = 0, 
		HEART,
		CLUB,
		DIAMOND
	};

	Card();

	void setId(const int& anId);

	Rank getRank() const;
	Suite getSuite() const;

	std::string toString() const;
	char getSuiteChar() const;

private:
	int id;
};
#endif
