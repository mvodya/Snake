#pragma once
#include "snake.h"
#include "vars.h"

namespace Controller {
	// Управление направлением змейки с клавиатуры
	void controlDirection(Snake *snake);
	// Отрисовка граней карты
	void drawBorder();
	// Перевод курсора на край экрана
	void cursorEnd();
}