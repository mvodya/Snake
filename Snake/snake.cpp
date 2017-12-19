#include "snake.h"

Snake::Snake() {
	sectors_.push_back(Sector(1, 1));
	direction_ = 2;
}

void Snake::update() {
	sectors_.push_back(Sector(1, 1));
}