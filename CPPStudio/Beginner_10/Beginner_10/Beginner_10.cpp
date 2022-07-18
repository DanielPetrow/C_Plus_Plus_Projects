﻿/*
* Задание: составить алгоритм увеличения всех трех, введённых с клавиатуры, переменных на 5,
* если среди них есть хотя бы две равные.
* В противном случае выдать ответ «равных нет».
*
* Решение: данная программа с помощью условного оператора if сравнивает числа.
*
* Ввод: три любых целых числа.
* Вывод: три введенных числа, увеличенных на 5 либо фраза "равных нет".
*
* Разработано: Петров Д.В
* Дата: 17.07.22
*/

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");

    int a;
    std::cout << "Введите первое число: ";
    std::cin >> a;

    int b;
    std::cout << "Введите второе число: ";
    std::cin >> b;

    int c;
    std::cout << "Введите третье число: ";
    std::cin >> c;

    if (a == b || a == c || b == c) {
        a += 5;
        b += 5;
        c += 5;

        std::cout
            << "Первое число = " << a
            << "\nВторое число = " << b
            << "\nТретье число = " << c
            << '\n';
    }
    else {
        std::cout << "Равных нет" << '\n';
    }

    return 0;
}
