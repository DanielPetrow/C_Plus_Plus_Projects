/*
* Задание:
*	Найти Y, если Y = X1 + X2 + … + Xn,
*   X = Z^3 - B + A^2 / tg^2(Betta).
*   Количество X вводятся пользователем программы.
*   Для каждого X значения Z, B, А, Betta разные (вводятся пользователем программы).
*	(http://cppstudio.com/post/1321/)
*
* О программе:
*	Данная программа ожидает на вход сначала одно целое число - количество иксов
*	Далее для каждого икса значение коэффициентов Z, B, A, Betta соответственно (могут быть нецелыми)
*   Проверяет введенные данные на корректность: Х - неотрицательный, tg(Betta) не равен 0
*   Находит и печатает значение Y в зависимости от введенных данных
*
* Ввод:
*	Сначала одно целое число - количество Х
*   Затем по 4 числа для каждого Х
*
* Примеры ввода:
*   3 2.3 45.1 12.9 3.67 3.3 12.12 7 8 4 3 1.14 2
*
* Вывод:
*	Значение Y в зависимости от введенных данных
*
* Пример вывода:
*	541.51
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

    int x{ 1 };
    std::cout << "Введите количество X: ";
    std::cin >> x;

    double y{ 0 };

    if (x >= 0) {

        double z{ 0 }, b{ 0 }, a{ 0 }, betta{ 1 };

        for (std::size_t i = 0; i < x; ++i) {
            std::cout << "Введите значения Z, B, A и Betta для " << "X" << i + 1 << ":\n";

            std::cout << "Z = ";
            std::cin >> z;

            std::cout << "B = ";
            std::cin >> b;

            std::cout << "A = ";
            std::cin >> a;

            std::cout << "Betta = ";
            std::cin >> betta;

            if (tan(betta)) {
                y += pow(z, 3) - b + pow(a, 2) / pow(tan(betta), 2);
                std::cout << '\n';
            }
            else {
                std::cout << "Неверное значение Betta. tg(Betta) не может быть равен нулю" << std::endl;
                break;
            }
        }
    }
    else {
        std::cout << "Количество Х не может быть отрицательным" << std::endl;
    }

    std::cout << "Y = " << y << std::endl;

    return 0;
}
