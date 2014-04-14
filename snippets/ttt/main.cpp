//#include <SFML/Graphics.hpp>
//#include <iostream>
//#include "Field.h" 
//#include <cstring>
//#include <cstdlib>
#include "Controller.h"
#include "View.h"
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
    Controller controller; //should init Game
    View view(controller);
    controller.registerView(view);
    controller.run();
   return 0;
}
