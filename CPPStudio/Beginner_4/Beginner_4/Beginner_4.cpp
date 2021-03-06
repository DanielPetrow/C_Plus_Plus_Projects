/*
* Задание: программа должна переводить число, введенное с клавиатуры в метрах, в километры.
* 
* Решение: данная программа ожидает на ввод количество метров
* Проверяет введенные данные на корректность
* Выводит количество километров в веденных метрах
* 
* Ввод: целое положительное число, представляющее метры
* Вывод: количество километров в введенном числе
* 
* Разработано: Петров Д.В
* Дата: 12.07.22
*/

#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");

	constexpr float mInKm = 1000.0f;

	std::cout << "Введите количество метров: ";

	int meters;
	std::cin >> meters;

	if (meters < 0) {
		std::cout << "Количество метров не может быть отрицательным" << '\n';
	}
	else {
		std::cout << meters << "м = " << meters / mInKm << "км" << '\n';
	}

	return 0;
}
