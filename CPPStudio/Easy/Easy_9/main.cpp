/*
* Задание:
*   Дан одномерный массив, длину массива задаёт пользователь
*   Вычислить сумму квадратов тех чисел, модуль которых превышает значение 2,5
*   (http://cppstudio.com/post/1345/)
*
* О программе:
*   Данная программа динамически создает массив и дает пользователю его заполнить
*   Далее программа находит сумму квадратов чисел, которые по модулю превышают 2.5 и печатает сумму
*   Входные данные проверяются на корректность: длина массива должна быть положительной
*
* Ввод:
*   Сначала одно целое положительное число - длина массива
*   Затем столько чисел, сколько задана длина массива
*
* Примеры ввода:
*   10
*   1.09 0.24 0.96 0.86 1.40 1.01 3.00 0.97 19.00 5.80
*
* Вывод:
*   Сумма квадратов чисел, по модулю превосходящих 2.5
*
* Пример вывода:
*   403.64
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

    double s { 0 };

    int size { 1 };
    std::cout << "Введите длину массива: ";
    std::cin >> size;

    if (size > 0) {
        double* arr = new double[size];

        std::cout << "Введите " << size << " чисел: ";
        for (std::size_t i = 0; i < size; ++i) {
            std::cin >> arr[i];

            if (fabs(arr[i]) > 2.5) {
                s += pow(arr[i], 2);
            }
        }

        delete[] arr;
    }
    else {
        std::cout << "Длина массива строго больше 0" << std::endl;
    }

    std::cout << "Сумма = " << s << std::endl;

    return 0;
}
