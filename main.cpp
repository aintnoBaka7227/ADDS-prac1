#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"


int main() {
    Computer c;
    Human human1("Zen");
    Human human2("Eamon");
    Referee referee;
    Player* winner;
    winner = referee.refGame(&c, &human1);
    if (winner == nullptr) {
        std::cout << " It's a Tie!." << std::endl;
    }
    else {
        std::cout << winner->getName() << " Wins." << std::endl;
    }
    winner = referee.refGame(&human1, &human2);
    if (winner == nullptr) {
        std::cout << "It's a Tie!." << std::endl;
    }
    else {
        std::cout << winner->getName() << " Wins." << std::endl;
    }
    return 0;
}