﻿#pragma once

// Кусок хвоста змеи (сектор)
class Sector {
private:
	int x_;
	int y_;
public:
	Sector(int x, int y);
	~Sector();
	void print(bool display);
};
