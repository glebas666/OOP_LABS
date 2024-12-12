#include "Lab_7.2.h"
#include <iomanip>

// ���������� ��������� ������ <<
std::ostream& operator<<(std::ostream& out, const FormattedOutput& obj) {
    out << std::setfill('*');

    out << std::setw(6) << obj._c2 << "\n";
    out << std::setw(6) << std::hex << std::uppercase << obj._i << "\n";
    out << std::setw(6) << obj._c1 << "\n";

    // ��� f1 � f2: ���� ���� ��� ��� ���������
    float values[] = { obj._f2, obj._f1 };
    for (float value : values) {
        for (int precision = 1; precision <= 3; ++precision) {
            out << std::setw(6) << std::fixed << std::setprecision(precision) << value << "\n";
        }
    }

    return out;
}

// ���������� ��������� ����� >>
std::istream& operator>>(std::istream& in, FormattedOutput& obj) {
    std::cout << "������� ������ c1: ";
    in >> obj._c1;

    std::cout << "������� ����� ����� i: ";
    in >> obj._i;

    std::cout << "������� ������� ����� f1: ";
    in >> obj._f1;

    std::cout << "������� ������� ����� f2: ";
    in >> obj._f2;

    std::cout << "������� ������ c2: ";
    in >> obj._c2;

    return in;
}
