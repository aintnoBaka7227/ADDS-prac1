#include <iostream>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"


int main() {

    Referee referee;
    Human human("Zen");
    Computer computer;
    human.makeMove();
    computer.makeMove();
    
    Player* winner;
    winner = referee.refGame(&computer, &human);
    
    if (winner == nullptr) {
        std::cout << "It's a Tie." << std::endl;
    }
    else {
        std::cout << winner->getName() << " Wins." << std::endl;
    }
    

    return 0;
}
