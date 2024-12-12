#include "Lab_4.2.h"

DautherString::DautherString() : String() {}

DautherString::DautherString(std::string_view newStr) : String(newStr) {}

void DautherString::SetStr(std::string_view newStr) {
    str = newStr;
    Print();
}

void DautherString::STRING() {
    str = "����� STRING �������������.";
    Print();
}

int DautherString::Strcmp(std::string_view other) const {
    int result = String::Strcmp(other);
    if (result == 1)
        cout << "������ �����;" << endl;
    else if (result == 2)
        cout << "���������������� ������ ������;" << endl;
    else
        cout << "���������������� ������ ������;" << endl;
    return result;
}

void DautherString::Print_at(int x, int y) const {
    String::Print_at(x, y);
}