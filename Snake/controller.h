#pragma once
#include "snake.h"

const int SIZE_BORDER_X = 100;
const int SIZE_BORDER_Y = 25;

namespace Controller {
	// Управление направлением змейки с клавиатуры
	void controlDirection(Snake *snake);
	// Отрисовка граней карты
	void drawBorder();
}