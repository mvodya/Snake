#pragma once
#include <iostream>
#include <windows.h>

// Кусок хвоста змеи (сегмент)
class Segment {
private:
	int x_; // Позиция сегмента
	int y_;
public:
	Segment(int x, int y);
	void print(bool display);
	void printKill();
	int getX() { return x_; };
	int getY() { return y_; };
};
