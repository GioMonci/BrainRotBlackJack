#include "Card.h"

Card::Card(Suit suit, Rank rank) {

    cardSuit = getRandomSuit(suit);
    cardRank = rank;

}

int Card::getRandomSuit(int s) {
    std::random_device rd;
    std::uniform_int_distribution<int> dist(0,3);
    int suitValue = dist(rd);
    std::cout << suitValue << std::endl;
    return suitValue;
}

void Card::getRandomRank() {

}


