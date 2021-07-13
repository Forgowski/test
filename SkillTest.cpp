#include "Header.h"
int main()
{
	Window W;
	Event e;
	while (W.isOpen())
	{
		while (W.pollEvent(e))
		{
			if (e.type == Event::Closed || (Keyboard::isKeyPressed(Keyboard::Escape)))W.close();
		}
	}



}