#pragma once
#include <deque>
#include "segment.h"

class Snake {
private:
	int direction_; // Направление движения
	int headX_; // Положение головы
	int headY_;
	std::deque<Segment> sectors_; // Стек сегментов хвоста
public:
	Snake();
	void update();
	void moveHead();
};
