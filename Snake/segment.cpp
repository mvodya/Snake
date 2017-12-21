#include "segment.h"

// Конструктор сегмента хвоста змеи
Segment::Segment(int x, int y) {
	x_ = x;
	y_ = y;
	// Сразу отображаем сегмент
	print(true);
}

// Отображает сегмент хвоста
void Segment::print(bool display) {
	// Указываем положение курсора
	COORD Coord;
	Coord.X = x_;
	Coord.Y = y_;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coord);
	// Отображаем символ
	if (display)
		std::cout << "0";
	else
		std::cout << " ";
}

// Перерисовывает сегмент другим символом (при смерти)
void Segment::printKill() {
	// Указываем положение курсора
	COORD Coord;
	Coord.X = x_;
	Coord.Y = y_;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coord);
	// Отображаем символ
	std::cout << "X";
}