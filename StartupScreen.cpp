#include "StartupScreen.h"
#include <iostream>
using namespace std;

string StartupScreen::show() {
    string name;
    cout << "===========================\n";
    cout << "  WELCOME TO GAME ZONE\n";
    cout << "===========================\n";
    cout << "Description:\n";
    cout << "1. Enjoy a variety of games.\n"
         << "2. Improve your skills.\n"
         << "3. Challenge yourself with difficulty levels.\n"
         << "4. Track your progress and achievements.\n"
         << "5. Have fun and compete with friends.\n\n"
         << "Enter your name: ";
    cin >> name;
    return name;
}
