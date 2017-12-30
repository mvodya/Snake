#include "food.h"

// Регенерация хавчика
void Food::regen() {
	x_ = std::rand() % (SIZE_BORDER_X - 1) + 1;
	y_ = std::rand() % (SIZE_BORDER_Y - 1) + 1;

	// Указываем положение курсора
	COORD Coord;
	Coord.X = x_;
	Coord.Y = y_;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coord);
	// Отображаем символ
	std::cout << "G";
}

// Проверка, съела ли хавчик змея
bool Food::test(Snake *snake) {
	if (snake->getX() == x_ && snake->getY() == y_) {
		snake->growUp(); // Увеличиваем змейку
		regen(); // Регенирируем хавчик
		return true;
	}
	return false;
}