#include "Lab_7.1.h"
#include <iostream>

int main() {
    String str1, str2;

    str1.STRING();
    std::cout << "Using STRING(should print nothing): " << str1 << std::endl;

    str1.Setstr("Test String for str1");
    str2.Setstr("Test String for str2");

    std::cout << "String 1: " << str1 << std::endl;
    std::cout << "String 2: " << str2 << std::endl;

    // Пример использования метода Print_at()
    std::cout << "String 1 with indentation of 5 characters: ";
    str1.Print_at(5, 2);  // Выводим строку с отступом

  

    // Пример использования Strcmp() для сравнения строк
    unsigned result = str1.Strcmp(str2);
    std::cout << "Example of using Strcmp: ";
    if (result == 1) {
        std::cout << "Strings are equal." << std::endl;
    }
    else if (result == 2) {
        std::cout << "String 1 is more." << std::endl;
    }
    else {
        std::cout << "String 1 is less." << std::endl;
    }

    std::cout << "Result of comparison: " << result << std::endl;

    // Пример использования перегрузки оператора вывода <<
    str1.Setstr("New string");
    std::cout << "String 1 after change: " << str1 << std::endl;

    // Пример использования перегрузки оператора ввода >>
    std::cout << "Enter string for str2: ";
    std::cin >> str2;  // Вводим строку
    std::cout << "You entered: " << str2 << std::endl;

    return 0;
}
