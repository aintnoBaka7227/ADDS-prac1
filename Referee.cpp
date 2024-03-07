#include "Referee.h"

Referee::Referee() {

}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1-> makeMove();
    Move* move2 = player2-> makeMove();
    std::vector<std::string>::iterator it;
    for (it = move1->getWinAgainstMoves().begin(); it != move1->getWinAgainstMoves().end(); it++) {
        if (move2->getName() == move1->getName()) {
            return nullptr;
        }
        if (move2->getName() == *it) {
            return player1;
        }
    }
    return player2;  
}