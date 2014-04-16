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
//26x26, 
//3x3 EMPTY
//29x3 X
//58x3 O
//void View::loadSpriteAndTextureInVector()

//Put text in Container and print it.
void View::init() {
    !load(font, "data\\lucon.ttf"); 
        
    textureContainer.push_back(sf::Texture()); 
    !load(textureContainer.back(), "data\\testSprite.png");        

    spriteMap.emplace(Sign::EMPTY, sf::Sprite());
    spriteMap.at(Sign::EMPTY).setTexture(textureContainer.back());
    spriteMap.at(Sign::EMPTY).setTextureRect(
            sf::Rect<int>(sf::Vector2<int>(3,3),sf::Vector2<int>(26,26)));
 
    spriteMap.emplace(Sign::X, sf::Sprite());
    spriteMap.at(Sign::X).setTexture(textureContainer.back());
    spriteMap.at(Sign::X).setTextureRect(
            sf::Rect<int>(sf::Vector2<int>(29,3),sf::Vector2<int>(26,26)));

   spriteMap.emplace(Sign::O, sf::Sprite());
    spriteMap.at(Sign::O).setTexture(textureContainer.back());
    spriteMap.at(Sign::O).setTextureRect(
            sf::Rect<int>(sf::Vector2<int>(58,3),sf::Vector2<int>(26,26)));


    textContainer.emplace_back(); 
    textContainer.back().setFont(font);
    textContainer.back().setString("XXXXXXXXxXXXXXXXXXXXXXXXXXXXxXXXXXXXXXXXXXXXxxXXXXXXXXXXXXXXXXXXXXXX");
    textContainer.back().setCharacterSize(14);
    }

void View::draw() {
    std::vector<Sign> signVec (9,Sign::EMPTY);
    signVec.at(4) = Sign::X;
    signVec.at(5) = Sign::O;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
       
       //window.draw(textContainer[0]);
       //window.draw(spriteContainer[0]); 
       drawSignField(signVec); 
       window.display();
    }
 
    
}

void View::drawSignField(std::vector<Sign> signVec){
    const int DISTANCE = 30;
    for (int i = 0; i < 3;i++){
    for (int j = 0; j < 3;j++){
    spriteMap.at(signVec.at(i*3+j)).setPosition(j*DISTANCE,i*DISTANCE);
    window.draw(spriteMap.at(signVec.at(i*3+j)));
    }
    }
    
}
