#include "MoveFactory.h"

Move* MoveFactory::moveGenerator(std::string current_move) {
    if (current_move == "Rock") {
        return new Rock;
    }
    else if (current_move == "Paper") {
        return new Paper;
    }
    else if (current_move == "Scissors") {
        return new Scissors;
    }
    return nullptr;
}