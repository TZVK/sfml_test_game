#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <string>
#include "Sign.h"
#include <map>
#include <memory>

class Controller;

class View {
    private:
        std::map<Sign,sf::Sprite> spriteMap;
        sf::RenderWindow window;
        sf::Font font;
        std::shared_ptr<Controller> controller;
        std::vector<sf::Text> textContainer;
        //std::vector<sf::Sprite> spriteContainer;
        std::vector<sf::Texture> textureContainer;
        View();
    public:
        
        View(std::shared_ptr<Controller> controller);
        ~View();
        
        void init();
        //template function with Deklaration
        //template<class T> bool load(T &element, std::string location); //Needs to be removed       
        template<class T>
        bool load(T &element, std::string location) {
            
            if(!element.loadFromFile(location)){
                std::cerr << "Can't load: " << location << std::endl;
                return false;
            }
            return true;
        }

        inline sf::Sprite getSpriteFromSign(Sign sign) { return spriteMap.at(sign);}

        void draw();
        void shit();
        void drawSignField(std::vector<Sign> signVec);
};
