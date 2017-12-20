#include "segment.h"

// Конструктор сегмента хвоста змеи
Segment::Segment(int x, int y) {
	x_ = x;
	y_ = y;
	print(true);
}

// Отображает сегмент хвоста
void Segment::print(bool display) {
	COORD Coord;
	Coord.X = x_;
	Coord.Y = y_;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coord);
	if (display)
		std::cout << "0";
	else
		std::cout << " ";
}