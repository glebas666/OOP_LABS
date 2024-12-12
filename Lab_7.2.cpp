#include "Lab_7.2.h"
#include <iomanip>

// Перегрузка оператора вывода <<
std::ostream& operator<<(std::ostream& out, const FormattedOutput& obj) {
    out << std::setfill('*');

    out << std::setw(6) << obj._c2 << "\n";
    out << std::setw(6) << std::hex << std::uppercase << obj._i << "\n";
    out << std::setw(6) << obj._c1 << "\n";

    // Для f1 и f2: один цикл для трёх точностей
    float values[] = { obj._f2, obj._f1 };
    for (float value : values) {
        for (int precision = 1; precision <= 3; ++precision) {
            out << std::setw(6) << std::fixed << std::setprecision(precision) << value << "\n";
        }
    }

    return out;
}

// Перегрузка оператора ввода >>
std::istream& operator>>(std::istream& in, FormattedOutput& obj) {
    std::cout << "Введите символ c1: ";
    in >> obj._c1;

    std::cout << "Введите целое число i: ";
    in >> obj._i;

    std::cout << "Введите дробное число f1: ";
    in >> obj._f1;

    std::cout << "Введите дробное число f2: ";
    in >> obj._f2;

    std::cout << "Введите символ c2: ";
    in >> obj._c2;

    return in;
}
