#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <string>

class Controller;

class View {
    private:
        sf::RenderWindow window;
        sf::Font font;
        Controller *controller;
        std::vector<sf::Text> textContainer;
        std::vector<sf::Sprite> spriteContainer;
        std::vector<sf::Texture> textureContainer;
        View();
    public:
        
        View(Controller &controller);
        ~View();
        
        void init();
        template<class T> bool load(T &element, std::string location);        


 
        void draw();
};
