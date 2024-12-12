#include "Lab_4.2.h"

DautherString::DautherString() : String() {}

DautherString::DautherString(std::string_view newStr) : String(newStr) {}

void DautherString::SetStr(std::string_view newStr) {
    str = newStr;
    Print();
}

void DautherString::STRING() {
    str = "Метод STRING переопределен.";
    Print();
}

int DautherString::Strcmp(std::string_view other) const {
    int result = String::Strcmp(other);
    if (result == 1)
        cout << "Строки равны;" << endl;
    else if (result == 2)
        cout << "Переопределенная строка больше;" << endl;
    else
        cout << "Переопределенная строка меньше;" << endl;
    return result;
}

void DautherString::Print_at(int x, int y) const {
    String::Print_at(x, y);
}