#include "StartupScreen.h"
#include "GameManager.h"
#include "Menu.h"
#include "MathQuiz.h"
#include "RiddleGame.h"
#include "Validator.h"

int main() {
    GameManager gameManager;
    string playerName = StartupScreen::show();

    Player* currentPlayer = gameManager.findPlayer(playerName);
    if (!currentPlayer) {
        Player newPlayer(playerName);
        gameManager.addPlayer(newPlayer);
        currentPlayer = gameManager.findPlayer(playerName);
    }

    while (true) {
        int mainChoice = Menu::showMainMenu();

        if (mainChoice == 1) {
            int gameChoice = Menu::showGameMenu();
            Game* selectedGame = nullptr;

            if (gameChoice == 1)
                selectedGame = new MathQuiz();
            else if (gameChoice == 2)
                selectedGame = new RiddleGame();
            else {
                cout << "Invalid selection.\n";
                continue;
            }

            selectedGame->play();
            delete selectedGame;

        } else if (mainChoice == 2) {
            gameManager.showAllStats();

        } else if (mainChoice == 3) {
            cout << "Goodbye!\n";
            break;
        } else {
            cout << "Invalid choice.\n";
            Validator::clearInput();
        }
    }

    return 0;
}
