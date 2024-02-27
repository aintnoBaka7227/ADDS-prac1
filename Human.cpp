#include "Human.h"
#include <iostream>
Human::Human(std::string name) {
    if (name.empty() == false) {
        this->name = name;
    }
    else {
        this->name = "Human";
    }
    std::cout << "Enter move: ";
    std::cin >> move;
    
}

std::string Human::getName() {
    return name;
}

char Human::makeMove() {
    
    return move;
}   