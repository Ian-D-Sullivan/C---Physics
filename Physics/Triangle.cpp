#include "Triangle.h"

#include <array>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>

using namespace std;

typedef array<float, 2> fPoint;

//constructor

Triangle::Triangle(array<fPoint, 3> vertexes, float mass)
{
	this->renderShape.setPointCount(3);

	this->globalVertexVectors = vertexes;
	this->mass = mass;

	updateCenter( );
	updateVertexVectors( );
}

//render

void Triangle::render(sf::RenderWindow& window)
{
	updateRender( );
	window.draw(renderShape);
}

//updaters

void Triangle::updateRender( )
{
	for( int i = 0; i < 3; i++ )
	{
		renderShape.setPoint(i, sf::Vector2f(globalVertexVectors[i][0], globalVertexVectors[i][1]));
	}
}

void Triangle::updateCenter( )
{
	center = { {0, 0} };
	for(int i = 0; i < 3; i++)
	{
		center += globalVertexVectors[i];
	}
	center /= 3;
}

void Triangle::updateVertexVectors( )
{
	for( int i = 0; i < 3; i++ )
	{
		localVertexVectors[i] = globalVertexVectors[i] - center;
	}
}

void Triangle::updateEdgeVectors( )
{
	for( int i = 0; i < 3; i++ )
	{
		edgeVectors[i] = localVertexVectors[i] - localVertexVectors[( i + 1 ) % 3];
	}
}

//collision check
