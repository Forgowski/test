#include "Header.h"



	Window::Window()
	{
		
		W.create(VideoMode(width, height, 32), "Test");
		W.setActive(true);
		W.setVerticalSyncEnabled(true);
		W.setPosition(Vector2i(400, 350));
	};

	void Window::update()
	{

	}

