#include "Header.h"
int main()
{

	while (Window.W.isOpen())
	{
		while (Window.W.pollEvent(e))
		{
			if (e.type == Event::Closed || (Keyboard::isKeyPressed(Keyboard::Escape)))W.close();
		}
	}



}