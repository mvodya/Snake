#include "snake.h"

// Конструктор змеи
Snake::Snake() {
	// Значения по умолчанию при старте
	headX_ = 1;
	headY_ = 1;
	direction_ = 1;
	maxTailSize_ = 1;
	dead_ = false;
	// добавляем первый сегмент
	sectors_.push_back(Segment(headX_, headY_));
	
}

// Обновление змеи
void Snake::update() {
	if (isAlive()) {
		// Перемещаем голову
		moveHead();
		// Пересечения с границей карты
		BorderOverlap();
		// Добавляем новый сегмент на место головы
		sectors_.push_back(Segment(headX_, headY_));
		// Обрезка хвоста
		tailLimiter();
		// Проверка на пересечение с хвостом
		if (isTailOverlap()) {
			dead_ = true;
			sectors_.back().printKill();
		}
	}
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
		break;
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

// Проверка на пересечение с хвостом
bool Snake::isTailOverlap() {
	// Берем первый (последний в стеке) сегмент
	Segment *head = &sectors_.back();

	// Перебираем все сегменты, кроме головы (последняя в стеке)
	for (size_t i = 0; i < sectors_.size() - 1; i++)
	{
		// Проверяем на совпадение координат
		if (sectors_[i].getX() == head->getX() && sectors_[i].getY() == head->getY())
			return true;
	}

	return false;
}

// Пересечения с границей карты
void Snake::BorderOverlap() {
	if (headX_ >= SIZE_BORDER_X - 1) {
		headX_ = 1;
	}
	if (headX_ <= 0) {
		headX_ = SIZE_BORDER_X - 2;
	}
	if (headY_ >= SIZE_BORDER_Y) {
		headY_ = 1;
	}
	if (headY_ <= 0) {
		headY_ = SIZE_BORDER_Y - 1;
	}
}