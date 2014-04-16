//#include <SFML/Graphics.hpp>
//#include <iostream>
//#include "Field.h" 
//#include <cstring>
//#include <cstdlib>
#include "View.h"
#include "Controller.h"
/*
void drawEverything(sf::RenderWindow &window){
    for (std::vector<sf::Text>::iterator iter = shapeContainer.begin(); iter != shapeContainer.end();iter++)
    window.draw(*iter);
}

void setConsolePosition(sf::Text &text, unsigned int column, unsigned int line){
    text.setPosition(column*text.getCharacterSize()/2,line*text.getCharacterSize());
}

void writeOnPosition(std::string, unsigned int column, unsigned int line) {
         
}
*/
int main()
{  
    std::shared_ptr<Controller> controller = std::make_shared<Controller>(); //should init Game
    //std::shared_ptr<View> view;
    //View view(std::make_shared<>(controller));
    //controller->registerView(view);
    controller->registerView(std::make_shared<View>(controller));
    controller->run();
   return 0;
}
