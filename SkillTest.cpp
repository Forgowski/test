#include "Header.h"
int main()
{
	RenderWindow W;
	W.create(VideoMode(1000, 600, 32), "Test");
	W.setActive(true);
	W.setVerticalSyncEnabled(true);
	W.setPosition(Vector2i(400, 350));
	Event e;
	while (W.isOpen())
	{
		while (W.pollEvent(e))
		{
			if (e.type == Event::Closed || (Keyboard::isKeyPressed(Keyboard::Escape)))W.close();
		}
	}



}