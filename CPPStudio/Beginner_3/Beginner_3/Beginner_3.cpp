﻿/*
* Задание:
*	Напишите программу, которая позволяет пользователю ввести в консоли латинскую букву нижнего регистра  
*   Далее программа переводит её в верхний регистр и результат выводит в консоль
*   (http://cppstudio.com/post/4615/)
*
* О программе:
*	Данная программа ожидает на вход букву латинского алфавита в нижнем регистре
*	Проверяет на корректность введенные данные (буква латинского алфавита, не цифра, не знак)
*   Используется кодировка символов ASCII
*
* Ввод:
*	Одна буква латинского алфавита в нижнем регистре
*
* Примеры ввода:
*	a, b, c, g, l, p, r, u, x, z
*
* Вывод:
*	Та же буква латинского алфавита в верхнем регистре
*
* Пример вывода:
*	A, B, C, G, L, P, R, U, X, Z
*
* Разработано:
*	Петров Д. В.
*
* Дата:
*	11.08.2022
*
* История версий:
*	v1.0 - начальная версия
*/

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");

    constexpr int a_code = 97; // код первой буквы латинского алфавита
    constexpr int z_code = 122; // код последней буквы латинского алфавита

    char ch{ ' ' };
    std::cout << "Введите букву латинского алфавита в нижнем регистре: ";
    std::cin >> ch;

    if (ch >= a_code && ch <= z_code) {
        std::cout << "Та же буква в верхнем регистре: " << char(ch - 32) << std::endl; // 32 - количество символов между соответствующими буквами в нижнем и верхнем регистрах согласно таблице ASCII
    }
    else {
        std::cout << "Введен неверный символ" << std::endl;
    }

    return 0;
}