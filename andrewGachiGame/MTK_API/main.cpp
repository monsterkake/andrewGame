#include "SFML\Graphics.hpp"
#include "SFML\Window.hpp"
#include "SFML\Audio.hpp"

#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>

#include "entities.h"
#include "renderAndEvents.h"
#include "calculations.h"

extern sf::RenderWindow window;

void init() 
{
    //window.create(sf::VideoMode(), "main", sf::Style::Fullscreen);
    window.create(sf::VideoMode(500,500), "main");
};

void mainLoop() 
{
    while (true) 
    {
        int a = 0;
        render();
        manageEvents();
    }
}

int main()
{
    init();
    //std::thread t1(fun);
    mainLoop();
    //t1.join();
    return 0;
}

