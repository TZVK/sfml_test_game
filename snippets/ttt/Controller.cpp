#include "Controller.h"

Controller::Controller() {
//Initialize Game 
//    view = View(this);
this->game = Game(3,3);
}

Controller::~Controller() {

}

void Controller::registerView(std::shared_ptr<View> view) { 
    this->view = view;
}

void Controller::run() {
    view->draw();
}

void Controller::getCommand() {
//Command_Event from GuI
}

