#ifndef CARD_H
#define CARD_H

#include "main.h"

class Card {
public:
    enum Suit {
        HEARTS, DIAMONDS, CLUBS, SPADES
    };
    enum Rank {
        TWO = 2, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE
    };

    Card(Suit suit, Rank rank);
    int getRandomSuit(int s);
    void getRandomRank();

private:
    Suit cardSuit;
    Rank cardRank;
};
#endif
