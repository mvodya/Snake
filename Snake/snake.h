﻿#pragma once
#include <deque>
#include "segment.h"

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
	bool isBorderOverlap();
	
	bool isAlive() { return !dead_; };
};
