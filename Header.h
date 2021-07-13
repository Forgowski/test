#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>
using namespace std;
using namespace sf;
class Window
{
public:
	Window();
	int height = 800;
	int width = 1000;
	RenderWindow W;
	Event e{};
	void update();


}; inline Window Window;