#include "Header.h"



	App::App()
	{
		
		W.create(VideoMode(width, height, 32), "Test");
		W.setActive(true);
		W.setVerticalSyncEnabled(true);
		W.setPosition(Vector2i(400, 350));
	};
	void App::clean()
	{
		this->W.clear();
	};
	bool App::checkclose()
	{
		return (e.type == Event::Closed || (Keyboard::isKeyPressed(Keyboard::Escape)));
	}

