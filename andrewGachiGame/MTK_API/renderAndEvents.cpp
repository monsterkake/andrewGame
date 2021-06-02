#include <thread>
#include <chrono>
#include <mutex>
#include <iostream>

#include "SFML\Graphics.hpp"
#include "SFML\Window.hpp"
#include <SFML\OpenGL.hpp>

#include "renderAndEvents.h"
#include "entities.h"

sf::RenderWindow window;

void manageEvents()
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::Closed:
			window.close();
			break;

		case sf::Event::MouseButtonPressed:
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			{
				
			}
			break;

		case sf::Event::KeyPressed:
			if (event.key.code == sf::Keyboard::Q)
				window.close();
			break;

		default: break;
		}
	}
}

std::mutex mutex;

Hero hero;

void render()
{
	window.clear();

	hero.move(10,0);
	if (hero.position.x > 300)
		hero.position.x = 0;
	hero.animation();
	window.draw(hero.sprite);

	window.display();

	std::this_thread::sleep_for(std::chrono::milliseconds(100));
}

