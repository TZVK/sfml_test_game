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
      
    public:
       Game();
       ~Game();
       void nextPlayer(); 
       Player PlayerWon();
};
