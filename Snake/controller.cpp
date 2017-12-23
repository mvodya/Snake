#include "controller.h"

// Управление направлениtv змейки с клавиатуры
void Controller::controlDirection(Snake *snake) {
	// Налево
	if (GetKeyState('A') & 0x8000)
	{
		snake->setDirection(3);
	}
	// Направо
	if (GetKeyState('D') & 0x8000)
	{
		snake->setDirection(1);
	}
	// Вверх
	if (GetKeyState('W') & 0x8000)
	{
		snake->setDirection(2);
	}
	// Ввниз
	if (GetKeyState('S') & 0x8000)
	{
		snake->setDirection(4);
	}
}

// Отрисовка граней карты
void Controller::drawBorder() {
	COORD Coord;

	// Верх
	for (size_t i = 0; i < SIZE_BORDER_X; i++)
	{
		Coord.X = i;
		Coord.Y = 0;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coord);
		std::cout << "-";
	}
	// Низ
	for (size_t i = 0; i < SIZE_BORDER_X; i++)
	{
		Coord.X = i;
		Coord.Y = SIZE_BORDER_Y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coord);
		std::cout << "-";
	}
	// Левая грань
	for (size_t i = 1; i < SIZE_BORDER_Y; i++)
	{
		Coord.X = 0;
		Coord.Y = i;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coord);
		std::cout << "|";
	}
	// Правая грань
	for (size_t i = 1; i < SIZE_BORDER_Y; i++)
	{
		Coord.X = SIZE_BORDER_X - 1;
		Coord.Y = i;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coord);
		std::cout << "|";
	}
}