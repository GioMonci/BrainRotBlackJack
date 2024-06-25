#include "main.h"
#include "Card.h"

Card::Card() {
    cardRank = getRandomRank();
    std::cout << cardRank << '\n';
}

    Card::Rank Card::getRandomRank() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(TWO,ACE);
    int getRandomRank = dist(gen);
    std::cout << getRandomRank << '\n';
    return static_cast<Rank>(getRandomRank);
}

