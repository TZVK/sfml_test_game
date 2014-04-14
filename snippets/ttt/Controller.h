#pragma once
#include "View.h"


class Controller {
    private:
        View *view;
     //   Game* games;
    public:
        Controller();
        ~Controller();
        void registerView(View &view);
        void run();
        void getCommand();

};
