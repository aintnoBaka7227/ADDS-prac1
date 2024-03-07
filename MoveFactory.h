#ifndef MOVEFACTORY_H
#define MOVEFACTORY_H
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Robot.h"
#include "Ninja.h"
#include "Zombie.h"
#include "Pirate.h"

class MoveFactory {
    public:
    Move* moveGenerator(std::string current_move);
};

#endif