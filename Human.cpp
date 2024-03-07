#include "Human.h"
#include <iostream>



Move* Human::makeMove() {
    std::string current_move;
    std::cout << "Enter move: ";
    std::cin >> current_move;
    MoveFactory::moveGenerator(current_move);
}


