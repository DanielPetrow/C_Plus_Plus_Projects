#include "chrono.h"

namespace Chrono {
    Date::Date(int yy, Month mm, int dd) : y{ yy }, m{ mm }, d{ dd }
    {
        if (!is_date(yy, mm, dd)) throw Invalid{  };
    }

    const Date& default_date() {
        static Date dd{ 2001, Month::jan, 1 }; // Начало XXI века
        return dd;
    }

    Date::Date() : y{ default_date().year() }, m{ default_date().month() }, d{ default_date().day() } {  }

    // Собственная реализация
    void Date::add_day(int n) {
        int currentMonthDays = daysInMonth(*this); // Количество дней в текущем месяце
        int daysLeft = currentMonthDays - day(); // Количество дней до конца текущего месяца

        if (n > 0) {
            if (n <= daysLeft) {
                d += n;
            }
            else {
                if (m == Month::dec) {
                    m = Month::jan;
                    add_year(1);
                }
                else {
                    m = static_cast<Month>(static_cast<int>(m) + 1);
                }

                d = 1;

                add_day(n - daysLeft - 1); // -1 учитывает переход в новый месяц
            }
        }
        else if (n < 0) {
            if (fabs(n) < day()) {
                d += n;
            }
            else {
                if (m == Month::jan) {
                    m = Month::dec;
                    add_year(-1); // !!!!! добавить проверку отрицательного года в add_year() !!!!!
                }
                else {
                    m = static_cast<Month>(static_cast<int>(m) - 1);
                }

                d = daysInMonth(*this);

                add_day(n + (currentMonthDays - daysLeft));
            }
        }
    }

    // Собственная реализация
    void Date::add_month(int n) {
        int currentMonthDays = daysInMonth(*this); // Количество дней в текущем месяце

        if (n > 1) {
            add_day(currentMonthDays);
            add_month(n - 1);
        }

        else if (n == 1) { add_day(currentMonthDays); }
        else if (n == -1) { add_day(-currentMonthDays); }

        else if (n < -1) {
            add_day(-currentMonthDays);
            add_month(n + 1);
        }
    }

    // Частично собственная реализация
    void Date::add_year(int n) {
        if (m == Month::feb && d == 29 && !leapyear(y + n)) {
            if (n > 0) {
                m = Month::mar;
                d = 1;
            }
            else if (n < 0) {
                m = Month::feb;
                d = 28;
            }

        }
        y += n;
    }

    bool is_date(int y, Month m, int d) {
        if (d <= 0) return false;
        if (m < Month::jan || m > Month::dec) return false;

        int days_in_month = 31;
        switch(m) {
            case Month::feb:
                days_in_month = (leapyear(y)) ? 29 : 28;
                break;
            case Month::apr:
            case Month::jun:
            case Month::sep:
            case Month::nov:
                days_in_month = 30;
                break;
            default:
                break;
        }

        if (days_in_month < d) return false;
        return true;
    }

    // Собственная реализация
    bool leapyear(int y) {
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) return true;
        return false;
    }

    bool operator == (const Date& a, const Date& b) {
        return a.year() == b.year()
                && a.month() == b.month()
                && a.day() == b.day();
    }

    bool operator != (const Date& a, const Date& b) {
        return !(a == b);
    }

    ostream& operator << (ostream& os, const Date& d) {
        return os << '(' << d.year()
                  << ',' << static_cast<int>(d.month())
                  << ',' << d.day() << ')';
    }

    istream& operator >> (istream& is, Date& dd) {
        int y, m, d;
        char ch1, ch2, ch3, ch4;

        is >> ch1 >> y >> ch2 >> m >> ch3 >> d >> ch4;

        if (!is) return is;
        if (ch1 != '(' || ch2 != ',' || ch3 != ',' || ch4 != ')') {
            is.clear(ios_base::failbit);
            return is;
        }
        dd = Date(y, Month(m), d);
        return is;
    }

    enum class Day {
        sunday, monday, tuesday, wednesday, thursday, friday, saturday
    };

    // Содственная реализация
    int daysInMonth(const Date& dd) {
        switch (dd.month()) {
            case Month::jan:
            case Month::mar:
            case Month::may:
            case Month::jul:
            case Month::aug:
            case Month::oct:
            case Month::dec:
                return 31;
            case Month::apr:
            case Month::jun:
            case Month::sep:
            case Month::nov:
                return 30;
            default:
                if (leapyear(dd.year())) return 29;
                return 28;
        }
    }

    // Собственная реализация
//    Day day_of_week(const Date& d) {
//        //
//        //
//        //
//    }

    // Собственная реализация
//    Date next_Sunday(const Date& d) {
//        //
//        //
//        //
//    }

    // Собственная реализация
//    Date next_weekday(const Date& d) {
//        //
//        //
//        //
//    }
}

int main() {
    try {
        Chrono::Date today(2020, Chrono::Month::feb, 29);

        Chrono::Date tomorrow(today);
        tomorrow.add_year(-1);

        cout << "Today: " << today << '\n';
        cout << "Tomorrow: " << tomorrow << '\n';
    }
    catch (Chrono::Date::Invalid) {
        cout << "Something went wrong\n";
    }

    return 0;
}
