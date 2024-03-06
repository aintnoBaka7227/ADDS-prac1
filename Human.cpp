#include "Human.h"
#include <iostream>
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"


Move* Human::makeMove() {
    std::string current_move;
    std::cout << "Enter move: ";
    std::cin >> current_move;

    if (current_move == "Rock") {
        return new Rock;
    }
    else if (current_move == "Paper") {
        return new Paper;
    }
    else if (current_move == "Scissors") {
        return new Scissors;
    }    
}


