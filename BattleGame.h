#ifndef BATTLEGAME_H
#define BATTLEGAME_H

#include "Player.h"
#include <iostream>

enum ActionType {
LIGHTATTACK,
HEAVYATTACK,
BLOCK

};

enum GameState {
PLAYING,
PLAYER1_WON,
PLAYER2_WON,
DRAW

};

class BattleGame {
private:
    Player player1;
    Player player2;
    GameState currentState;
    static int totalGamesPlayed;
    static int totalDamageDealt;
    static int player1Wins;
    static int player2Wins;

    int calculateDamage(ActionType action);

    void resolveActions(ActionType p1Move, ActionType p2Move);

    void updateGameState();

public:
    // Constructor: Sets 2 players' names and set game status to PLAYING. Implementation is given.
    BattleGame(std::string p1Name, std::string p2Name);
    
    // ========================================
    // TODO: Implement executeTurn
    // ========================================
    // 1. Set blocking state for both players based on their actions
    // 2. Call resolveActions()
    // 3. Call updateGameState()
    void executeTurn(ActionType p1Move, ActionType p2Move);

    // Displays current HP. Implementation is given.
    void displayStatus();

    // ========================================
    // TODO: Returns the current game's state.
    // ========================================
    GameState getGameState();


    // ----------------------------------------
    // Static Methods: 
    // These operate on static data that's shared across all instances.
    // It doesn't belong to any specific BattleGame instance, 
    // nor does it need a specific instance to be called.
    // ----------------------------------------

    // Displays the current game's statistics. Implementation is given.
    static void displayStatistics();

    // ========================================
    // TODO: Returns the total number of games played.
    // ========================================
    static int getTotalGamesPlayed();
    
};

#endif
