#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include "MoveFactory.h"

class Human : public Player {
    public:
    Move* makeMove();
};

#endif