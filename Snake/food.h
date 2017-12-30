#pragma once
#include <cstdlib>
#include <ctime>
#include "snake.h"

// Хавчик для роста змейки
class Food {
private:
	int x_; // Позиция хавчика
	int y_;
	void regen();
public:
	Food() { regen();};
	bool test(Snake *snake);
};
