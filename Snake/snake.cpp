#include "snake.h"

// Конструктор змеи
Snake::Snake() {
	// Значения по умолчанию при старте
	headX_ = 1;
	headY_ = 1;
	direction_ = 1;
	// добавляем первый сегмент
	sectors_.push_back(Segment(headX_, headY_));
	
}

// Обновление змеи
void Snake::update() {
	moveHead();
	sectors_.push_back(Segment(headX_, headY_));
	sectors_.front().print(false);
	sectors_.pop_front();
}

// Движение змеи
void Snake::moveHead() {
	switch (direction_)
	{
	case 1:
		headX_++;
		break;
	case 2:
		headY_--;
		break;
	case 3:
		headX_--;
	case 4:
		headY_++;
	default:
		break;
	}
}