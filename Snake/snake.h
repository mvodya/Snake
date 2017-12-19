#pragma once
#include <deque>
#include "segment.h"

class Snake {
private:
	int direction_; // Направление движения
	std::deque<Segment> sectors_; // Стек секторов хвоста
public:
	Snake();
	void update();
};
