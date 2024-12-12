#pragma once
#include <iostream>

class FormattedOutput {
private:
    char _c1, _c2;
    int _i;
    float _f1, _f2;

public:
    // ����������� ��� �������������
    FormattedOutput(char c1 = ' ', int i = 0, float f1 = 0.0, float f2 = 0.0, char c2 = ' ')
        : _c1(c1), _i(i), _f1(f1), _f2(f2), _c2(c2) {}

    // ���������� ��������� ������ <<
    friend std::ostream& operator<<(std::ostream& out, const FormattedOutput& obj);

    // ���������� ��������� ����� >>
    friend std::istream& operator>>(std::istream& in, FormattedOutput& obj);
};