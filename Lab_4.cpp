#include "Lab_4.h"

String::String() : str("") {}

String::String(std::string_view newStr) : str(newStr) {}

String::~String() {}

void String::SetStr(std::string_view newStr) {
    cout << "Метод SetStr для изменения строки: " << endl;
    str = newStr;
    Print();
}

void String::STRING() {
    cout << "Метод STRING для инициализации пустой строкой: " << endl;
    str = "";
    Print();
}

void String::Print() const {
    cout << str << endl;
}

int String::Strcmp(std::string_view other) const {
    cout << "Метод Strcmp: ";
    if (str == other) return 1;
    return (str > other) ? 2 : 3;
}

void String::Print_at(int x, int y) const {
    cout << "Метод Print_at: ";
    for (int i = 0; i < x; i++) {
        cout << endl;
    }
    for (int i = 0; i < y; i++) {
        cout << " ";
    }
    Print();
}

std::string_view String::GetStrView() const {
    return str;
}

