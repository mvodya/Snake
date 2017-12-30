#pragma once
#include <deque>
#include "segment.h"
#include "vars.h"

// Змея
class Snake {
private:
	int direction_; // Направление движения
	int headX_; // Положение головы
	int headY_;
	int maxTailSize_; // Максимальная длинна хвоста
	bool dead_; // Змейка мертва?
	std::deque<Segment> sectors_; // Стек сегментов хвоста
public:
	Snake();
	void update();
	void tailLimiter();
	void moveHead();
	void setDirection(int direction);
	bool isTailOverlap();
	void BorderOverlap();
	void growUp() { maxTailSize_++; };

	bool isAlive() { return !dead_; };
	int getX() { return headX_; };
	int getY() { return headY_; };
};
