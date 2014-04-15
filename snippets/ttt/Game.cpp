#include "Game.h"

Game::Game(){
    initPlayers();
   //Field
   //field = Field() Automatically...
}

Game::Game(int x, int y) {
   initPlayers();
   field = Field(x,y);
}

Game::~Game(){
}

void Game::initPlayers() {
    //First Player
    players.emplace_back();
    players.back().name = "Human";
    players.back().sign = Sign::X;
    //Second Player
    players.emplace_back();
    players.back().name = "Human";
    players.back().sign = Sign::O;
} 

Player Game::playerWon(){
    //checkForWinner Logic 
}
