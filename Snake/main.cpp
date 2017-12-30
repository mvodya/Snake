#include <iostream>
#include <chrono>
#include <thread>
#include "snake.h"
#include "controller.h"
#include "food.h"

Snake *snake;
Food *food;

// Основной игровой цикл
void gameLoop() {
	// Управление направлением змейки
	Controller::controlDirection(snake);
	// Обновление змейки
	snake->update();
	// Проверка хавчика
	food->test(snake);
	// Перевод курсора на край экран
	Controller::cursorEnd();
}

int main() {
	snake = new Snake();
	food = new Food();
	Controller::drawBorder();
	while (true)
	{
		gameLoop(); // Запускаем игровой цикл
		std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Задержка (тик цикла)
	}

	system("pause");
	return 0;
}