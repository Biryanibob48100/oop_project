#include "MathQuiz.h"
#include <iostream>
using namespace std;

MathQuiz::MathQuiz() : Game("Math Quiz") {}

void MathQuiz::play() {
    cout << "Welcome to " << gameName << "!" << endl;
    cout << "Choose Difficulty (easy/hard): ";
    cin >> difficulty;

    int score = 0, answer;

    if (difficulty == "easy") {
        cout << "5 + 3 = ? "; cin >> answer;
        if (answer == 8) score += 50;
        cout << "7 - 2 = ? "; cin >> answer;
        if (answer == 5) score += 50;
    } else if (difficulty == "hard") {
        cout << "15 * 3 = ? "; cin >> answer;
        if (answer == 45) score += 50;
        cout << "81 / 9 = ? "; cin >> answer;
        if (answer == 9) score += 50;
    } else {
        cout << "Invalid difficulty.\n";
        return;
    }
    cout << "Your score: " << score << "%" << endl;
}
