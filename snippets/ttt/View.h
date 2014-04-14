#pragma once
#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <iostream>
class View {
    private:
        sf::RenderWindow window;
        sf::Font font;
        std::vector<sf::Text> textContainer;
        std::vector<sf::Sprite> spriteContainer;
        std::vector<sf::Texture> textureContainer;
    public:
        View();
        ~View();
        
        void init();
        template<class T> bool load(T &element, std::string location);        


 
        void draw();
};
