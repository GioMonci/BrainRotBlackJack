#include "main.h"

int main() {
    Card myCard;
    Card::Rank randomRank = myCard.getRandomRank();
    std::cout << "card rank: " << randomRank << std::endl;

    return 0;
}
