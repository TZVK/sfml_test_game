#pragma once
#include "View.h"
#include "Game.h"
#include <memory>

class Controller {
    private:
        std::shared_ptr<View> view;
        Game game;
    public:
        Controller();
        ~Controller();
        void registerView(std::shared_ptr<View> view);
        void run();
        void getCommand();
        inline Sign getSignAt(int x, int y) { return game.getSignAt(x,y); }

};
