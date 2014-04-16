#include "View.h"
#include <iostream>

View::View(std::shared_ptr<Controller> controller) {
    window.create(sf::VideoMode(600,300), "TicTacToe", sf::Style::Titlebar | sf::Style::Close); 
    this->controller = controller;
    init(); 
}

View::View(){
}

View::~View() {

}

void View::shit() {
    std::cout << "SHIT, YO! \n";
}

//void View::loadSpriteAndTextureInVector()

//Put text in Container and print it.
void View::init() {
    !load(font, "data\\lucon.ttf"); 
        
    textureContainer.push_back(sf::Texture()); 
    !load(textureContainer.back(), "data\\testSprite.png");        
    //spriteMap instead
    spriteContainer.emplace_back();
    spriteContainer.back().setTexture(textureContainer.back());
    
    spriteMap.emplace(Sign::EMPTY, sf::Sprite());
    spriteMap.at(Sign::EMPTY).setTexture(textureContainer.back());
    
    textContainer.emplace_back(); 
    textContainer.back().setFont(font);
    textContainer.back().setString("XXXXXXXXxXXXXXXXXXXXXXXXXXXXxXXXXXXXXXXXXXXXxxXXXXXXXXXXXXXXXXXXXXXX");
    textContainer.back().setCharacterSize(14);
    }

void View::draw() {
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
       window.draw(textContainer[0]);
       window.draw(spriteContainer[0]); 
       window.display();
    }
 
    
}


