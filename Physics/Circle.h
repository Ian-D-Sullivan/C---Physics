#pragma once
#include "BasicShape.cpp"

#include <array>
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

using namespace std;

typedef array<float, 2> fPoint;

class Circle :
    public BasicShape
{

private:

    float radius;

    sf::CircleShape renderShape;

    //draw

    void updateRender( );

    //collision check

    //updaters

public:

    //getters

    float getRadius( ) const { return radius; }
    
    //constructor

    Circle(fPoint, float, float);

    //render

    void render(sf::RenderWindow&);

    //collision check

    //updater

};