#include "segment.h"

// Конструктор сектора хвоста змеи
Segment::Segment(int x, int y) {
	x_ = x;
	y_ = y;
	print(true);
}

// Деструктор сектора хвоста змеи
Segment::~Segment() {
	print(false);
}

// Отображает сектор хвоста
void Segment::print(bool display) {
	COORD Coord;
	Coord.X = x_;
	Coord.Y = y_;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coord);
	if (display)
		std::cout << " ";
	else
		std::cout << "0";
}