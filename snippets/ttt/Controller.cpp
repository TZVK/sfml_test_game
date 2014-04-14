#include "Controller.h"

Controller::Controller() {
//Initialize Game 
}

Controller::~Controller() {

}

void Controller::registerView(View &view) { 
    this->view = &view;
}

void Controller::run() {
    view->draw();
}

void Controller::getCommand() {

}
