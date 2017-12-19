#pragma once
#include <deque>

// Кусок хвоста
struct Sector { int x, y; };

class Snake {
private:
	int _direction; // Направление движения
	std::deque<Sector> _sectors; // Стек секторов хвоста
public:
};
