
#include "pch.h"
#include <string>
#include <SFML/Graphics.hpp>
#define MOVE_SPEED 0.05;
using namespace sf;

int main()
{
	RenderWindow window(sf::VideoMode(500, 500), "Example");

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
		
		window.clear();
		window.display();
	}

	return 0;
}