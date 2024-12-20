#include "Circle.h"

#include <array>
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

using namespace std;

typedef array<float, 2> fPoint;

//constructor

Circle::Circle(fPoint center, float radius, float mass)
{
	this->center = center;
	this->radius = radius;
	this->mass = mass;
}

//render

void Circle::render(sf::RenderWindow& window)
{
	updateRender( );
	window.draw(renderShape);
}

//updaters

void Circle::updateRender( )
{
	renderShape.setRadius(radius);
	renderShape.setPosition(center[0] - radius, center[1] - radius);
}

//collision check