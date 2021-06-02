#include "entities.h"

void Entity::move(float x, float y)
{
	position += sf::Vector2f(x, y);
	sprite.setPosition(this->position);
}

Hero::Hero() 
{
	texture.loadFromFile("images/hero.png");
	sprite.setTexture(texture);
	position = sf::Vector2f(0, 0);
	animationVector = sf::Vector2f(0, 0);
}

void Hero::animation() 
{
	sprite.setTextureRect(IntRect(animationVector.x, animationVector.y, 90, 100));
	animationVector.x += 96;
	if (animationVector.x >= 279) {
		animationVector.x = 0;
		animationVector.y += 96;
	}
	if (animationVector.y >= 379) {

		animationVector.y = 0;
	}
}
