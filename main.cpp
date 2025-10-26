#include "GameInterface.h"
#include "Player.h"
#include "BattleGame.h"

int main() {
    std::string p1Name = "Player 1";
    std::string p2Name = "Player 2";

    GameInterface::displayWelcome();

    bool again = true;

    while (again == true) {
        
        BattleGame game(p1Name, p2Name);

        while (game.getGameState() == GameState::PLAYING) {
            ActionType p1Move;
            ActionType p2Move;
            p1Move = GameInterface::getPlayerAction(p1Name);
            p2Move = GameInterface::getPlayerAction(p2Name);
            game.executeTurn(p1Move, p2Move);
            GameInterface::displayTurnResult(p1Name, p1Move, p2Name, p2Move);
            game.displayStatus();
        }
        
        GameInterface::displayWinner(game.getGameState(), p1Name, p2Name);
        BattleGame::displayStatistics();
    }
    if (!GameInterface::askPlayAgain() == 'y' || !GameInterface::askPlayAgain() == 'Y')
    {
        again = false;
    }
    
    std::cout << "\nThanks for playing!" << std::endl;
    
    return 0;
}