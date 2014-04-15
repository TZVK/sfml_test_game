#include "View.h"

View::View(Controller &controller) {
    window.create(sf::VideoMode(600,300), "TicTacToe", sf::Style::Titlebar | sf::Style::Close); 
    this->controller = &controller;
    init(); 
}

View::View(){
}

View::~View() {

}

template<class T>
bool View::load(T &element, std::string location){
    
    if(!element.loadFromFile(location)){
        std::cerr << "Can't load: " << location << std::endl;
        return false;
    }
    return true;
}
//Put text in Container and print it.
void View::init() {
    (!load(font, "data\\lucon.ttf")); 
        
    sf::Texture texture; 
   (!load(texture, "data\\testSprite.png"));
        
    textureContainer.push_back(texture); 

    sf::Sprite sprite;
    sprite.setTexture(textureContainer[0]);
    spriteContainer.push_back(sprite);
    
    sf::Text t;
    textContainer.push_back(t); 
    textContainer[0].setFont(font);
    textContainer[0].setString("XXXXXXXXxXXXXXXXXXXXXXXXXXXXxXXXXXXXXXXXXXXXxxXXXXXXXXXXXXXXXXXXXXXX");
    textContainer[0].setCharacterSize(14);
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
