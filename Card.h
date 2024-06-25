#ifndef CARD_H
#define CARD_H

class Card {
public:
    enum Rank {
        TWO = 2, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE
    };
    explicit Card();
    static Rank getRandomRank();
private:
    Rank cardRank;
};
#endif
