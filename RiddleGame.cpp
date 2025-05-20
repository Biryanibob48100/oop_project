#include "RiddleGame.h"
#include <iostream>
#include <string>
using namespace std;

RiddleGame::RiddleGame() : Game("Riddle Game") {}

void RiddleGame::play() {
    cout << "Welcome to " << gameName << "!" << endl;
    cout << "Choose Difficulty (easy/hard): ";
    cin >> difficulty;

    string answer;
    int score = 0;
    cin.ignore();

    if (difficulty == "easy") {
        cout << "What has to be broken before you can use it? ";
        getline(cin, answer);
        if (answer == "egg" || answer == "Egg") score += 50;

        cout << "I'm tall when I'm young, and short when I'm old. What am I? ";
        getline(cin, answer);
        if (answer == "candle" || answer == "Candle") score += 50;
    } else if (difficulty == "hard") {
        cout << "What has cities, but no houses; forests, but no trees; and water, but no fish? ";
        getline(cin, answer);
        if (answer == "map" || answer == "Map") score += 50;

        cout << "The more of this you take, the more you leave behind. What is it? ";
        getline(cin, answer);
        if (answer == "footsteps" || answer == "Footsteps") score += 50;
    } else {
        cout << "Invalid difficulty.\n";
        return;
    }
    cout << "Your score: " << score << "%" << endl;
}
