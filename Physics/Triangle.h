#pragma once

#include "BasicShape.cpp"
#include <array>
#include <SFML/Graphics/ConvexShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

using namespace std;

typedef array<float, 2> fPoint;

class Triangle :
    public BasicShape
{

private:

    //vector from origin to vertex
    //used for global calculations
    array<fPoint, 3> globalVertexVectors;

    //vector from center to vertex
    //used for local calculations
    array<fPoint, 3> localVertexVectors;

    //vector from vertexVectors[ i ] to vertexVectors[ ( i + 1 ) % 3]
    array<fPoint, 3> edgeVectors;

    sf::ConvexShape renderShape;

    //collision check
    
    //updaters

    void updateRender( );

    void updateCenter( );

    void updateGlobalVertexVectors( );

    void updateLocalVertexVectors( );

    void updateEdgeVectors( );

public:

    //constructor

    Triangle(array<fPoint, 3>, float);

    //render

    void render(sf::RenderWindow&);

    //collision check

    //updaters

};