#pragma once
#include <string>
#include "Field.h"
#include <vector>
#include "Sign.h"

struct Player {
    std::string name;
    Sign sign;
};

class Game {
    private:
       Field field;
       std::vector<Player> players;
       int playerTurn;

    public:
       Game();
       Game(int x, int y);
       ~Game();
       inline void nextPlayer() { playerTurn = (playerTurn+1) % players.size(); }
       inline Player getPlayer(){ return players.at(playerTurn);}
       Player playerWon();
       void initPlayers();
};
