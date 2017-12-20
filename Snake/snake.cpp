#include "snake.h"

// Конструктор змеи
Snake::Snake() {
	// Значения по умолчанию при старте
	headX_ = 1;
	headY_ = 1;
	direction_ = 1;
	maxTailSize_ = 10;
	// добавляем первый сегмент
	sectors_.push_back(Segment(headX_, headY_));
	
}

// Обновление змеи
void Snake::update() {
	// Перемещаем голову
	moveHead();
	// Добавляем новый сегмент на место головы
	sectors_.push_back(Segment(headX_, headY_));
	// Обрезка хвоста
	tailLimiter();
}

// Удаляет сегменты на конце хвоста
void Snake::tailLimiter() {
	// Если достигли предела
	if (sectors_.size() > maxTailSize_) {
		// Убираем символ в консоли
		sectors_.front().print(false);
		// Убираем их стека
		sectors_.pop_front();
	}
}

// Движение змеи (изменение положения головы)
void Snake::moveHead() {
	// В зависимости от направления
	switch (direction_)
	{
	case 1: // Вправо
		headX_++;
		break;
	case 2: // Вверх
		headY_--;
		break;
	case 3: // Влево
		headX_--;
	case 4: // Вниз
		headY_++;
	default:
		break;
	}
}

// Указывает направление
void Snake::setDirection(int direction) {
	direction_ = direction;
}