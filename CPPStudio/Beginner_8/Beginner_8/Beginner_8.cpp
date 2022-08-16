/*
* Задание:
*	Напишите программу, запрашивающую имя, фамилия, отчество и номер группы студента
*   и выводящую введённые данные как показано в разделе "Пример вывода"
*   (http://cppstudio.com/post/1395/)
*
* О программе:
*	Данная программа ожидает на вход имя, фамилию, отчество и номер группы.
*   Итогова рамка меняется в зависимости от длины введенных данных.
*
* Ввод:
*	Имя, фамилия, отчество и номер группы
*
* Примеры ввода:
*	Даниил Петров Валерьевич 171-334
*
* Вывод:
*   Рамка с введенными данными
*
* Пример вывода:
*	********************************
*   * Лабораторная работа № 1      *
*   * Выполнил(а): ст. гр. 171-334 *
*   * Петров Даниил Валерьевич     *
*   ********************************
*
* Разработано:
*	Петров Д. В.
*
* Дата:
*	16.08.2022
*
* История версий:
*	v1.0 - начальная версия
*/  

#include <iostream>

std::string printChar(const char& ch, const int& amount) {
    std::string res{ "" };
    for (std::size_t i = 0; i < amount; ++i) {
        res += ch;
    }
    return res;
}

int main()
{
    system("chcp 1251>nul");

    std::string name{ "" };
    std::cout << "Введите ваше имя: ";
    std::cin >> name;

    std::string surname{ "" };
    std::cout << "Введите вашу фамилию: ";
    std::cin >> surname;

    std::string patronymic{ "" };
    std::cout << "Введите ваше отчество: ";
    std::cin >> patronymic;

    std::string group{ "" };
    std::cout << "Введите номер вашей группы: ";
    std::cin >> group;

    constexpr int topLine{ 23 };

    unsigned int middleLine{ 21 + group.length() };
    unsigned int bottomLine{ name.length() + surname.length() + patronymic.length() + 2 };
   
    // определяем наибольшую строку
    int longest{ 0 };
    if (topLine > middleLine) {
        longest = topLine;
    }
    else {
        longest = middleLine;
    }
    if (bottomLine > longest) {
        longest = bottomLine;
    }

    std::cout << "\n\t" << printChar('*', longest + 4);
    std::cout << "\n\t" << "* Лабораторная работа № 1" << printChar(' ', longest - topLine) << " *";
    std::cout << "\n\t" << "* Выполнил(а): ст. гр. " << group << printChar(' ', longest - middleLine) << " *";
    std::cout << "\n\t" << "* " << surname << ' ' << name << ' ' << patronymic << printChar(' ', longest - bottomLine) << " *";

    std::cout << "\n\t" << printChar('*', longest + 4) << std::endl;

    return 0;
}
