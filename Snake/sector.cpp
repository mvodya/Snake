#include "sector.h"

// Конструктор сектора хвоста змеи
Sector::Sector(int x, int y) {
	x_ = x;
	y_ = y;
	print(true);
}

// Деструктор сектора хвоста змеи
Sector::~Sector() {
	print(false);
}

// Отображает сектор хвоста
void Sector::print(bool display) {
	COORD Coord;
	Coord.X = x_;
	Coord.Y = y_;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coord);
	if (display)
		std::cout << " ";
	else
		std::cout << "0";
}