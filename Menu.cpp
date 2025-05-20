#include "Menu.h"
#include <iostream>
using namespace std;

int Menu::showMainMenu() {
    int choice;
    cout << "\n=== Main Menu ===\n"
         << "1. Play Game\n"
         << "2. View Stats\n"
         << "3. Exit\n"
         << "Select option: ";
    cin >> choice;
    return choice;
}

int Menu::showGameMenu() {
    int choice;
    cout << "\nSelect a game:\n"
         << "1. Math Quiz\n"
         << "2. Riddle Game\n"
         << "Select option: ";
    cin >> choice;
    return choice;
}
