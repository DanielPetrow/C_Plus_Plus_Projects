/*
* Задание: составьте программу, которая напечатает рисунок, используя символы из таблицы ASCII
*
* Решение: данная программа с помощью символов из таблицы ASCII
* Печатает прямоугольники, количество и ширину которых пользователь вводит с клавиатуры
* Входные данные проверяются на корректность
*
* Ввод: первое число - количество прямоугольников, которое будет выведено, больше 0
* Второе число - ширина прямоугольников, не может быть отрицательным
* Вывод: рисунок символами в соответствии с введенными числами
* 
* Кодировка по таблице ASCII
*
* Разработано: Петров Д.В
* Дата: 17.07.22
*/

#include <iostream>

// перегрузка оператора умножения для вывода строки определенное количество раз
std::string operator*(const std::string& str, const int& num) {
    
    std::string res;

    for (int i = 0; i < num; ++i) {
        res += str;
    }

    return res;
}

int main()
{
    constexpr char topLeft = char(201);
    constexpr char topRight = char(187);
    constexpr char bottomLeft = char(200);
    constexpr char bottomRight = char(188);

    constexpr char topT = char(203);
    constexpr char bottomT = char(202);

    constexpr char line = char(205);

    int recAmount;
    std::cout << "The amount of rectangulars: ";
    std::cin >> recAmount;

    int recWidth;
    std::cout << "The additional width of each rectangular: ";
    std::cin >> recWidth;

    if (recAmount < 1) {
        std::cout << "The amount cannot be negative or zero" << '\n';
    }
    else if (recWidth < 0) {
        std::cout << "The width cannot be negative" << '\n';
    }
    else {
        // печать верхней половины
        std::cout << topLeft;
        for (int i = 0; i < recAmount - 1; ++i) {
            std::cout << std::string(1, line) * (recWidth) << topT;
        }
        std::cout << std::string(1, line) * (recWidth) << topRight << '\n';

        // печать нижней половины
        std::cout << bottomLeft;
        for (int i = 0; i < recAmount - 1; ++i) {
            std::cout << std::string(1, line) * (recWidth) << bottomT;
        }
        std::cout << std::string(1, line) * (recWidth) << bottomRight << '\n';
    }

    return 0;
}
