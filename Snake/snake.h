#pragma once
#include <deque>
#include "sector.h"

class Snake {
private:
	int _direction; // Направление движения
	std::deque<Sector> _sectors; // Стек секторов хвоста
public:
};
