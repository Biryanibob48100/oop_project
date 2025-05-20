#ifndef RIDDLEGAME_H
#define RIDDLEGAME_H

#include "Game.h"

class RiddleGame : public Game {
public:
    RiddleGame();
    void play() override;
};

#endif
