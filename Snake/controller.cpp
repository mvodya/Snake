#include "controller.h"

void Controller::controlDirection(Snake *snake) {
	if (GetKeyState('A') & 0x8000)
	{
		snake->setDirection(3);
	}
	if (GetKeyState('D') & 0x8000)
	{
		snake->setDirection(1);
	}
	if (GetKeyState('W') & 0x8000)
	{
		snake->setDirection(2);
	}
	if (GetKeyState('S') & 0x8000)
	{
		snake->setDirection(4);
	}
}