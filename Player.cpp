#include "Player.h"
#include <iostream>
using namespace std;

Player::Player(string playerName) : name(playerName) {}

void Player::updateScore(string gameName, float score) {
    gameScores[gameName] = score;
}

void Player::viewStats() {
    cout << "Stats for " << name << ":\n";
    for (auto& entry : gameScores) {
        cout << " - " << entry.first << ": " << entry.second << "%\n";
    }
}
