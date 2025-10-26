#include "BattleGame.h"
#include "Player.h"

int BattleGame::totalGamesPlayed = 0;
int BattleGame::totalDamageDealt = 0;
int BattleGame::player1Wins = 0;
int BattleGame::player2Wins = 0;

// Constructor. Implementation given.
BattleGame::BattleGame(std::string p1Name, std::string p2Name) {
    player1 = Player(p1Name);
    player2 = Player(p2Name);
    currentState = GameState::PLAYING;
}

int BattleGame::calculateDamage(ActionType action) {
    switch (action)
    {
    case LIGHTATTACK:
        return 15;
        break;
    case HEAVYATTACK:
        return 30;
        break;
    case BLOCK:
        return 0;
        break;
    default:
        return 0;
        break;
    }
}

void BattleGame::resolveActions(ActionType p1Move, ActionType p2Move) {
    player2.takeDamage(calculateDamage(p1Move));
    player1.takeDamage(calculateDamage(p2Move));

    totalDamageDealt = totalDamageDealt + calculateDamage(p1Move) + calculateDamage(p2Move);
}

void BattleGame::updateGameState() {
   
    bool p1Alive = player1.isAlive();
    bool p2Alive = player2.isAlive();

    if (p1Alive && p2Alive) {
        currentState = GameState::PLAYING;
    } else if (p1Alive && !p2Alive) {
        currentState = GameState::PLAYER1_WON;
        player1Wins++;
        totalGamesPlayed++;
    } else if (!p1Alive && p2Alive) {
        currentState = GameState::PLAYER2_WON;
        player2Wins++;
        totalGamesPlayed++;
    } else {
        currentState = GameState::DRAW;
        totalGamesPlayed++;
    }
}

void BattleGame::executeTurn(ActionType p1Move, ActionType p2Move) {
    if (p1Move == BLOCK)
    {
        player1.setBlocking(true);
    } else {
        player1.setBlocking(false);
    }
    
    if (p2Move == BLOCK)
    {
        player2.setBlocking(true);
    } else {
        player2.setBlocking(false);
    }
    resolveActions(p1Move, p2Move);
    updateGameState();

}

// Displays current HP for both players. Implementation is given.
void BattleGame::displayStatus() {
    std::cout << "\n=== Battle Status ===" << std::endl;
    std::cout << player1.getName() << " HP: " << player1.getHealth() << std::endl;
    std::cout << player2.getName() << " HP: " << player2.getHealth() << std::endl;
    std::cout << "===================\n" << std::endl;
}

GameState BattleGame::getGameState() {
    return currentState;
}


// Displays the current game's statistics. Implementation is given.
void BattleGame::displayStatistics() {
    std::cout << "\n=== Game Statistics ===" << std::endl;
    std::cout << "Total Games Played: " << totalGamesPlayed << std::endl;
    std::cout << "Total Damage Dealt: " << totalDamageDealt << std::endl;
    std::cout << "Player 1 Wins: " << player1Wins << std::endl;
    std::cout << "Player 2 Wins: " << player2Wins << std::endl;
    std::cout << "=======================\n" << std::endl;
}



int BattleGame::getTotalGamesPlayed() {
    return totalGamesPlayed;
}
