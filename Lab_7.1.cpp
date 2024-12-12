#include "Lab_7.1.h"
#include <iostream> 

// Конструктор по умолчанию
String::String() : str(nullptr), size(0) {}

// Конструктор с параметром
String::String(const char* newStr) {
    size = 0;
    while (newStr[size] != '\0') {
        size++;  // Вычисляем размер строки
    }

    str = new char[size + 1];  // Выделяем память для строки
    for (int i = 0; i < size; i++) {
        str[i] = newStr[i];  // Копируем символы из newStr
    }
    str[size] = '\0';
}

// Деструктор
String::~String() {
    delete[] str;  // Освобождаем память, выделенную под строку
}

// Метод для изменения строки
void String::Setstr(const char* newStr) {
    delete[] str;  // Освобождаем старую память
    size = 0;
    while (newStr[size] != '\0') {
        size++;  // Вычисляем новый размер строки
    }

    str = new char[size + 1];  // Выделяем память для новой строки
    for (int i = 0; i < size; i++) {
        str[i] = newStr[i];  // Копируем символы из newStr
    }
    str[size] = '\0';  
}

// Перегрузка оператора вывода <<
std::ostream& operator<<(std::ostream& os, const String& obj) {
    if (obj.str != nullptr) {
        for (int i = 0; i < obj.size; i++) {
            os << obj.str[i];  // Выводим каждый символ строки
        }
    }
    return os;
}
// Перегрузка оператора ввода >>
std::istream& operator>>(std::istream& is, String& obj) {
    char buffer[256];  // Временный буфер для чтения строки
 // Чтение строки символ за символом до первого пробела или конца строки
int i = 0;
char ch;
while (is.get(ch) && ch != '\n') {
    buffer[i++] = ch;
}
buffer[i] = '\0';  // Завершаем строку нулевым символом

    // Устанавливаем строку через Setstr
    obj.Setstr(buffer);
    return is;
}

// Метод для печати с отступом
void String::Print_at(int num_x, int num_y) {
    for (int j = 0; j < num_y; j++) {
        std::cout << std::endl;  // Печатаем пробелы для отступа вниз
    }
    for (int i = 0; i < num_x; i++) {
        std::cout << " ";  // Печатаем пробелы для отступа
    }
    std::cout << str << std::endl;  // Выводим строку
}

// Метод для сравнения строк
unsigned String::Strcmp(const String& other) const {
    if (str == nullptr || other.str == nullptr) return 3;  // Если одна из строк пустая, считаем, что они не равны

    int i = 0;
    while (i < size && i < other.size) {
        if (str[i] < other.str[i]) return 3;  // Текущая строка меньше
        if (str[i] > other.str[i]) return 2;  // Текущая строка больше
        i++;
    }

    // Если длины строк разные
    if (size < other.size) return 3;
    if (size > other.size) return 2;

    return 1;  // Строки равны
}

void String:: STRING() {
    delete[] str;  // Удаляем старую строку, если она была
    str = nullptr;  // Устанавливаем указатель в nullptr
    size = 0;       // Размер строки равен 0
}
