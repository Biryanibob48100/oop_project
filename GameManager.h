#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "Player.h"
#include <vector>
using namespace std;

class GameManager {
private:
    vector<Player> players;
public:
    void addPlayer(Player player);
    Player* findPlayer(string name);
    void showAllStats();
};

#endif
