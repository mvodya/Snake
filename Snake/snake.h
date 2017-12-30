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
	void tailLimiter();
	void moveHead();
	bool isTailOverlap();
	void BorderOverlap();
public:
	Snake();
	void update();
	void setDirection(int direction);
	void growUp() { maxTailSize_+=2; };

	bool isAlive() { return !dead_; };

	int getX() { return headX_; };
	int getY() { return headY_; };
};
