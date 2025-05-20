#ifndef GAME_H
#define GAME_H

#include <string>
using namespace std;

class Game {
protected:
    string gameName;
    string difficulty;
public:
    Game(string name);
    virtual void play() = 0;
    virtual ~Game() {}
};

#endif
