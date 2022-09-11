/*
* Задание:
*	Возвести, введенное с клавиатуры число, в степень n, степень тоже вводится с клавиатуры.
*   Возведение в степень организовать с использованием циклов
*   Примечание: не использовать функцию pow для нахождения степени
*	(http://cppstudio.com/post/1292/)
*
* О программе:
*	Данная программа ожидает на вход 2 целых числа: число и степень, в которую нужно возести это число
*
* Ввод:
*	Сначала одно целое число - число, которое нужно возвести в сепень
*   Затем одно целое число - степень, в которую нужно возвести число
*
* Примеры ввода:
*   2
*   10
*
* Вывод:
*	Ответ в соответствии с введенными данными
*
* Пример вывода:
*	1024
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

    int number { 1 };
    std::cout << "Введите число: ";
    std::cin >> number;

    int power{ 1 };
    std::cout << "Введите степень: ";
    std::cin >> power;

    long long int ans { 1 };

    for (std::size_t i = 0; i < power; ++i) {
        ans *= number;
    }

    std::cout << "Ответ: " << ans << std::endl;

    return 0;
}
