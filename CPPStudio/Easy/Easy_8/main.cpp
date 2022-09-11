/*
* Задание:
*   Вычислить, не используя функцию pow, значения функции z(x, m) = x^m * sin^m(x * m), для значений аргументов:
*   x от -1.1 до 0.3 с шагом 0.2;
*   m от 1 до 5 с шагом 1.
*   (http://cppstudio.com/post/1345/)
*
* О программе:
*   Данная программа выполняет печать значения функции в соответствии с условиями задания
*
* Ввод:
*   Отсутствует
*
* Примеры ввода:
*   -
*
* Вывод:
*   Значения функции с при разных параметрах
*
* Пример вывода:
*   -
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

double recursionPower(const double& number, int power) {
    double res { 1 };

    if (power == 0) {
        return 1;
    }
    else if (power == 1) {
        return number;
    }
    else {
        return res * recursionPower(number, power - 1);
    }
}

int main()
{
    setlocale(LC_ALL, "PL_pl.UTF-8");
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    double x { -1.1 };
    int m { 1 };

    for (double i = x; i <= 0.3; i += 0.2) {
        for (int j = m; j <= 5; ++j) {
            std::cout << "z(" << i << ", " << j << ") = " << recursionPower(i, j) * recursionPower(sin(i * j), j) << std::endl;
        }
        std::cout << std::endl;

    }

    return 0;
}
