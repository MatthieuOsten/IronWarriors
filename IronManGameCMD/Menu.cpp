#include "Menu.h"
#include <iostream>

int Menu::Display()
{
	int enter = 0;

	std::cout << "1) Play\n2) Editing\n3) Quit\n";
	std::cin >> enter;

	return enter;

}
