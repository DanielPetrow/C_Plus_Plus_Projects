﻿/*
* Задание:
*	Используя один оператор вывода cout, программа должна напечатать прямоугольный треугольник из символов знака плюс +
*   (http://cppstudio.com/post/2573/)
*
* О программе:
*	Данная программа ожидает на вход целое число, представляющее высоту треугольника
*	Проверяет на корректность введенные данные (больше нуля)
*
* Ввод:
*	Одно целое положительное число
*
* Примеры ввода:
*	5, 15, 135
*
* Вывод:
*	Треугольник в соотвествии с введнной высотой
*
* Пример вывода:
*	*
*   **
*   ***
*   ****
*   *****
*
* Разработано:
*	Петров Д. В.
*
* Дата:
*	16.08.2022
*
* История версий:
*	v1.0 - начальная версия
*/

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");

    int height{ 1 };
    std::cout << "Введите высоту треугольника: ";
    std::cin >> height;

    if (height > 0) {
        for (std::size_t i = 0; i < height; ++i) {
            for (std::size_t j = 0; j < i + 1; ++j) {
                std::cout << '+';
            }
            std::cout << std::endl;
        }
    }
    else {
        std::cout << "Неверная высота треугольника" << std::endl;
    }
    
    return 0;
}
