#include "std_lib_facilities.h"

#ifndef CHRONO_H
#define CHRONO_H

namespace Chrono {
    enum class Month {
        jan = 1, feb, mar, apr, may, jun,
        jul, aug, sep, oct, nov, dec
    };

    enum class DaysPerMonth {
        jan = 31, feb = 28,
        mar = 31, apr = 30, may = 31,
        jun = 30, jul = 31, aug = 31,
        sep = 30, oct = 31, nov = 30,
        dec = 31
    };

    class Date {
    public:
        class Invalid {  }; // Для генерации исключений

        Date(int y, Month m, int d); // Проверка корректности и инициализация
        Date(); // Конструктор по умолчанию
        // Копирование не изменяется

        // Немодифицирующие операции
        int day() const { return d; }
        Month month() const { return m; }
        int year() const { return y; }

        // Модифицирующие операции
        void add_day(int n);
        void add_month(int n);
        void add_year(int n);

    private:
        int y;
        Month m;
        int d;
    };

    bool is_date(int y, Month m, int d); // true для корректной даты
    bool leapyear(int y); // true для високосного года

    bool operator == (const Date& a, const Date& b);
    bool operator != (const Date& a, const Date& b);

    ostream& operator << (ostream& os, const Date& d);
    istream& operator >> (istream& is, const Date& dd);

    int daysInMonth(const Date& dd);
}

#endif // CHRONO_H
