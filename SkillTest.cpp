#include "Header.h"

int main()
{
	
	while (MYW.W.isOpen())
	{
		while (MYW.W.pollEvent(MYW.e))
		{
			if (MYW.checkclose())MYW.W.close();
		}
	}



}