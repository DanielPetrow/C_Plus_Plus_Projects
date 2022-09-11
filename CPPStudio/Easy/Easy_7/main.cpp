/*
* Задание:
*   Напишите программу, которая позволяет пользователю ввести в консоль три координаты вектора x, y, и z
*   Основание у начала координат
*   Вычислите длину этого вектора и выведите её обратно в консоль
*   (http://cppstudio.com/post/4618/)
*
* О программе:
*   Данная программа вычисляет длину вектора по введенным координатам и печатает её
*   Расчетная формула: sqrt(xК^2 - xН^2 + yК^2 - yН^2 + zК^2 - zН^2), К - конец вектора, Н - начало вектора
*   С учетом того, что по услвоию основание находится в начале координат формула примет вид: sqrt(xК^2 + yК^2 + zК^2)
*
* Ввод:
*   Три числа, отражающие координаты x, y и z соответственно
*
* Примеры ввода:
*   5
*   5
*   5
*
* Вывод:
*   Длина вектора
*
* Пример вывода:
*   8.66025
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

    double x{ 0 };
    std::cout << "Введите координату x: ";
    std::cin >> x;

    double y{ 0 };
    std::cout << "Введите координату y: ";
    std::cin >> y;

    double z{ 0 };
    std::cout << "Введите координату z: ";
    std::cin >> z;

    std::cout << "Длина вектора {" << x << ", " << y << ", " << z << "} = " << sqrt(x * x + y * y + z * z) << std::endl;

    return 0;
}
