/*
* Задание:
*	Организовать ввод двухзначного натурального числа с клавиатуры.
*   Программа должна определить наименьшую и наибольшую цифры, которые входят в состав данного натурального числа.
*	(http://cppstudio.com/post/2612/)
*
* О программе:
*	Данная программа ожидает на вход двухначное число
*   Проверяет введенные данные на корректность: число должно быть двухзначным
*   Печатает сначала большую цифру числа, затем меньшую
*
* Ввод:
*	Одно целое двузначное число, в том числе отрицательное
*
* Примеры ввода:
*   15
*
* Вывод:
*	Сначала большая цифра числа, затем меньшая
*
* Пример вывода:
*	5 - большая цифра
*   1 - меньшая цифра
*
* Разработано:
*	Петров Д. В.
*
* Дата:
*	11.09.2022
*
* История версий:
*	v1.0 - начальная версия
*/

#include <iostream>
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "PL_pl.UTF-8");
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int number { 10 };
    std::cout << "Введите двухзначное число: ";
    std::cin >> number;

    bool positive { (number > 9) && (number < 100) };
    bool negative { (number > -100) && (number < -9) };

    if (positive) {
        if (number / 10 > number % 10) {
            std::cout
                    << number / 10 << " - большая цифра\n"
                    << number % 10 << " - меньшая цифра"
                    << std::endl;
        }
        else if (number / 10 < number % 10) {
            std::cout
                    << number % 10 << " - большая цифра\n"
                    << number / 10 << " - меньшая цифра"
                    << std::endl;
        }
        else {
            std::cout << "Обе цифры одинаковые: " << number / 10 << ' ' << number % 10 << std::endl;
        }
    }
    else if (negative) {
        if (number / 10 < number % 10) {
            std::cout
                    << -number / 10 << " - большая цифра\n"
                    << -number % 10 << " - меньшая цифра"
                    << std::endl;
        }
        else if (number / 10 > number % 10) {
            std::cout
                    << -number % 10 << " - большая цифра\n"
                    << -number / 10 << " - меньшая цифра"
                    << std::endl;
        }
        else {
            std::cout << "Обе цифры одинаковые: " << -number / 10 << ' ' << -number % 10 << std::endl;
        }
    }
    else {
        std::cout << "Число не является двухзначным" << std::endl;
    }

    return 0;
}
