#include "Referee.h"



Referee::Referee() {

}

Player* Referee::refGame(Player* player1, Player* player2) {
    if (player1->getName() != "Computer") {
        if (player1->makeMove() == 'R') {
            return nullptr;
        }
        else if (player1->makeMove() == 'P') {
            return player1;
        }
        else {
            return player2;
        }
    }
    else {
        if (player2->makeMove() == 'R') {
            return nullptr;
        }
        else if (player2->makeMove() == 'P') {
            return player2;
        }
        else {
            return player1;
        }
    }
}