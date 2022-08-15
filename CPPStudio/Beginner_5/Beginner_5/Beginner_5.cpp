/*
* Задание:
*   Составьте программу, которая напечатает рисунок, используя символы из таблицы ASCII
*   (http://cppstudio.com/post/2598/)
*
* О программе:
*   Данная программа с помощью символов ASCII печатает рисунок
*   Рисунок состоит из прямоугольников
*   Программа ждет от пользователя 3 числа
*   3 числа представляют количество прямоугольников, их ширину и высоту
*   Проверяет введенные данные на корректность (количество неотрицательное, ширина и высота нулевые или положительные)
*   Отключена локализация консоли на русский язык для корректной кодировки символов
*
* Ввод:
*	3 целых числа для количества прямоугольников их ширины и высоты
*
* Примеры ввода:
*	5
*   2 
*   1
*
* Вывод:
*	Прямоугольники в соответствии с введенными данными
*
* Пример вывода:
*   ╔══╦══╦══╦══╦══╗
*   ║  ║  ║  ║  ║  ║
*   ╚══╩══╩══╩══╩══╝
*
* Разработано:
*	Петров Д. В.
*
* Дата:
*	13.08.2022
*
* История версий:
*	v1.0 - начальная версия
*/

#include <iostream>

constexpr char topLeft{ static_cast<char> (201) };
constexpr char topRight{ static_cast<char> (187) };
constexpr char bottomLeft{ static_cast<char> (200) };
constexpr char bottomRight{ static_cast<char> (188) };
constexpr char horizontalLine{ static_cast<char> (205) };
constexpr char verticalLine{ static_cast<char> (186) };
constexpr char topSeparator{ static_cast<char> (203) };
constexpr char bottomSeparator{ static_cast<char> (202) };

std::string printWidth(const int& width) {
    std::string res{ "" };
    for (size_t i = 0; i < width; ++i) {
        res += horizontalLine;
    }
    return res;
}

std::string printHeight(const int& height) {
    std::string res{ "" };
    for (size_t i = 0; i < height; ++i) {
        res += verticalLine;
    }
    return res;
}

std::string printBlankWidth(const int& width) {
    std::string res{ "" };
    for (size_t i = 0; i < width; ++i) {
        res += " ";
    }
    return res;
}

int main()
{
    int amount{ 1 };
    std::cout << "Type the positive integer number of rects: ";
    std::cin >> amount;

    int width{ 0 };
    std::cout << "Type the positive integer width of rects: ";
    std::cin >> width;

    int height{ 0 };
    std::cout << "Type the positive integer height of rects: ";
    std::cin >> height;

    if (amount <= 0) {
        std::cout << "The amount of rects must be a positive nubmer" << std::endl;
    }
    else if (width < 0 || height < 0) {
        std::cout << "The width and height must be positive numbers or zeros" << std::endl;
    }
    else {
        // вывод верхней части рисунка
        std::cout << topLeft;
        for (size_t i = 0; i < amount; ++i) {
            std::cout << printWidth(width);

            if (i == amount - 1) {
                break;
            }
            else {
                std::cout << topSeparator;
            }
        }
        std::cout << topRight << std::endl;

        // вывод средней части рисунка
        for (size_t i = 0; i < height; ++i) {
            std::cout << verticalLine;
            for (size_t j = 0; j < amount; ++j) {
                std::cout << printBlankWidth(width);

                // не выводим сепаратор в последний раз
                if (j == amount - 1) {
                    break;
                }
                else {
                    std::cout << verticalLine;
                }
            }
            std::cout << verticalLine << std::endl;
        }

        // вывод нижней части рисунка
        std::cout << bottomLeft;
        for (size_t i = 0; i < amount; ++i) {
            std::cout << printWidth(width);

            // не выводим сепаратор в последний раз
            if (i == amount - 1) {
                break;
            }
            else {
                std::cout << bottomSeparator;
            }
        }
        std::cout << bottomRight << std::endl;
    }

    return 0;
}