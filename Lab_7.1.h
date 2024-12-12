#pragma once
#include <iostream>
using namespace std;

class String {
protected:
    char* str; // Указатель на строку
    int size;  // Размер строки

public:
    String();                      // Конструктор по умолчанию
    String(const char* newStr);     // Конструктор с параметром
    ~String();                     // Деструктор

   void STRING();

    void Setstr(const char* newStr); // Метод для изменения строки
    void Print_at(int num_x, int num_y);  // Метод для печати с отступом (для демонстрации)
    unsigned Strcmp(const String& other) const;  // Метод для сравнения строк

    friend ostream& operator<<(ostream& os, const String& obj); // Перегрузка оператора вывода <<
    friend istream& operator>>(istream& is, String& obj);       // Перегрузка оператора ввода >>
};
