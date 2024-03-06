#include "Move.h"

std::string Move::getName() {
    
}

Move::Move(std::string move_name, std::vector<std::string> moves) {
    this->move_name = move_name;
    win_against_moves.insert(win_against_moves.end(), moves.begin(), moves.end());
}   