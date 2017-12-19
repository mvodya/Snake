#pragma once
#include <deque>
#include "sector.h"

class Snake {
private:
	int direction_; // Направление движения
	std::deque<Sector> sectors_; // Стек секторов хвоста
public:
	Snake();
	void update();
};
