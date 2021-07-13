#pragma once
#ifndef HED_INCLUDED
#define HED_INCLUDED

#include <functional>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>
using namespace std;
using namespace sf;
class App
{
public:
	App();
	RenderWindow W;
	int height = 800;
	int width = 1000;
	Event e{};
	void clean();
	bool checkclose();

	
};
inline App MYW;
#endif 