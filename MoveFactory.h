#ifndef MOVEFACTORY_H
#define MOVEFACTORY_H
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"

class MoveFactory {
    public:
    static Move* moveGenerator(std::string current_move);
};

#endif