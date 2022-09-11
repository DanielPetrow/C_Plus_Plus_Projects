﻿/*
* Задание:
*	Составить программу, которая будет считывать введённое пятизначное число
*	После чего, каждую цифру этого числа необходимо вывести в новой строке
*	(http://cppstudio.com/post/2591/)
*
* О программе:
*	Данная программа ожидает на вход пятизначное целое число
*	Проверяет на корректность введенные данные (пятизначность числа)
*
* Ввод:
*	Одно целое пятизначное число, в том числе отрицательное
*
* Примеры ввода:
*	-00068491, -15627, -10000, 10000, 85095, 0015627
*
* Вывод:
*	Каждая цифра введенного пятизначного числа на отдельной строке
*
* Пример вывода:
*	8
*	5
*	0
*	9
*	5
*
* Разработано:
*	Петров Д. В.
*
* Дата:
*	11.08.2022
*
* История версий:
*	v1.0 - начальная версия
*/

#include <iostream>

int main() {

	setlocale(LC_ALL, "RUS");

	std::cout << "Деление числа на разряды\n\n";

	int number{ -1 };
	std::cout << "Введите пятизначное число: ";
	std::cin >> number;

	// проверка попадания введенного числа в диапазон пятизначных чисел, в том числе отрицательных
	bool positive = (number > 9999) && (number < 100000);
	bool negative = (number < -9999) && (number > -100000);

	if (positive) {
		std::cout
			<< number / 10000 << '\n'
			<< number / 1000 % 10 << '\n'
			<< number / 100 % 10 << '\n'
			<< number / 10 % 10 << '\n'
			<< number % 10 << std::endl;
	}
	else if (negative) {
		std::cout
			<< -number / 10000 << '\n'
			<< -number / 1000 % 10 << '\n'
			<< -number / 100 % 10 << '\n'
			<< -number / 10 % 10 << '\n'
			<< -number % 10 << std::endl;
	}
	else {
		std::cout << "Число " << number << " не является пятизначным" << std::endl;
	}

	return 0;
}