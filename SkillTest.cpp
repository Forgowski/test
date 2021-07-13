#include "Header.h"

int main()
{
	
	while (MYW.W.isOpen())
	{
		while (MYW.W.pollEvent(MYW.e))
		{
			if (MYW.e.type == Event::Closed || (Keyboard::isKeyPressed(Keyboard::Escape)))MYW.W.close();
		}
	}



}