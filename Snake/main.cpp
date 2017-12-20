﻿#include <iostream>
#include <chrono>
#include <thread>
#include "snake.h"
#include "controller.h"
Snake *snake;

// Основной игровой цикл
void gameLoop() {
	Controller::controlDirection(snake);
	snake->update();
}

int main() {
	snake = new Snake();

	while (true)
	{
		gameLoop(); // Запускаем игровой цикл
		std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Задержка (тик цикла)
	}

	system("pause");
	return 0;
}