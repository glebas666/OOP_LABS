#pragma once

#include <iostream>
using namespace std;

class String {
protected:
    char* str;    // Указатель на строку
    int size;     // Размер строки

public:
    String();                             // Конструктор по умолчанию
    String(const char* newStr);           // Конструктор с параметром
    ~String();                            // Деструктор

    void Setstr(const char* newStr);      // Установить строку
    void Setstr(char ch, int count);      // Установить строку из повторяющегося символа

    void STRING();                        // Инициализация пустой строки

    void Print() const;                   // Вывод строки

    unsigned Strcmp(const char* other) const;
    unsigned Strcmp(int num) const;
    unsigned Strcmp(double num) const;

    void Print_at(int x, int y) const;    // Печать со знакоместа
    void Print_at(int num) const;         // Перегрузка для числовых отступов

    String operator+(const String& other) const; // Перегрузка оператора сложения
    bool operator<(const String& other) const;   // Меньше
};
