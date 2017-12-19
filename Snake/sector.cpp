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

}