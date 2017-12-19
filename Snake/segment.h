#pragma once
#include <iostream>
#include <windows.h>

// Кусок хвоста змеи (сегмент)
class Segment {
private:
	int x_;
	int y_;
public:
	Segment(int x, int y);
	~Segment();
	void print(bool display);
};
