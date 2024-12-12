#include "Lab_1.h"
#include <iostream>

int main() {
    String str1, str2;

    str1.STRING();
    std::cout << "Using STRING (should print nothing): " << std::endl;

    str1.Setstr("Test String for str1");
    str2.Setstr("Test String for str2");

    std::cout << "String 1: " << std::endl;
    str1.Print_at(0, 0);
    std::cout << "String 2: " << std::endl;
    str2.Print_at(0, 0);

    // Example of using Print_at()
    std::cout << "String 1 with indentation of 5 characters: ";
    str1.Print_at(5, 2);  // Print string with indentation

    // Example of using Strcmp() to compare strings
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

    // Modify string and display result
    str1.Setstr("New string");
    std::cout << "String 1 after change: " << std::endl;
    str1.Print_at(0, 0);

    return 0;
}