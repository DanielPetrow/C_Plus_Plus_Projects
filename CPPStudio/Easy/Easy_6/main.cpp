/*
* Задание:
*	Суть задачи: по введенному номеру дня недели вывести его название, используя оператор множественного выбора.
*   Нумерация дней недели начинается с 1 – понедельник, 2 — вторник и т. д.
*	(http://cppstudio.com/post/2631/)
*
* О программе:
*	Данная программа ожидает на вход одно целое число - номер дня недели
*   Проверяет введенные данные на корректность: день недели находится в диапазоне [1, 7]
*   В зависимости от введенного числа печатает соотвествующий день недели
*
* Ввод:
*	Одно целое число - день недели
*
* Примеры ввода:
*   3
*
* Вывод:
*	День недели соответствующий введенному числу
*
* Пример вывода:
*	Среда
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

    int day{ 1 };
    std::cout << "Введите номер дня недели: ";
    std::cin >> day;

    switch (day) {
        case 1: {
            std::cout << "Понедельник" << std::endl;
            break;
        }
        case 2: {
            std::cout << "Вторник" << std::endl;
            break;
        }
        case 3: {
            std::cout << "Среда" << std::endl;
            break;
        }
        case 4: {
            std::cout << "Четверг" << std::endl;
            break;
        }
        case 5: {
            std::cout << "Пятница" << std::endl;
            break;
        }
        case 6: {
            std::cout << "Суббота" << std::endl;
            break;
        }
        case 7: {
            std::cout << "Воскресенье" << std::endl;
            break;
        }
        default: {
            std::cout << "Неверный номер дня недели" << std::endl;
            break;
        }
    }

    return 0;
}