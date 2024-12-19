
#include "Circle.h"
#include <array>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/VideoMode.hpp>

using namespace std;

typedef array<float, 2> fPoint;

int main( )
{

    Circle A({ {250,250} }, 50, 0 );

    sf::RenderWindow window(
        sf::VideoMode(500, 500),
        "Test");

    while( window.isOpen( ) )
    {
        sf::Event event;
        while(
            window.pollEvent(event) )
            if( event.type ==
               sf::Event::Closed )
                window.close( );

        window.clear( );
        A.draw(window);
        A.translate({ {0, 0.01 } });
        window.display( );
    }
    return 0;
}
