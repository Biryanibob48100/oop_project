#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <map>
using namespace std;

class Player {
public:
    string name;
    map<string, float> gameScores;

    Player(string playerName);
    void updateScore(string gameName, float score);
    void viewStats();
};

#endif
