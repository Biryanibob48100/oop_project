#include "GameManager.h"
#include <iostream>
using namespace std;

void GameManager::addPlayer(Player player) {
    players.push_back(player);
}

Player* GameManager::findPlayer(string name) {
    for (auto& p : players)
        if (p.name == name) return &p;
    return nullptr;
}

void GameManager::showAllStats() {
    for (auto& p : players) {
        p.viewStats();
        cout << endl;
    }
}
