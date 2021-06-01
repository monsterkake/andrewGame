#pragma once
#include "SFML\Graphics.hpp"
#include "SFML\Window.hpp"
#include <SFML\OpenGL.hpp>

using namespace sf;


class Entity 
{
public:
	sf::Texture texture;
	sf::Sprite sprite;
	sf::Vector2f position;
	void move(float, float);
	void setPosition();
	void getPosition();
};

class Hero : public Entity
{
	sf::Vector2f animationVector;
public:
	Hero();
	void animation();
	
};
