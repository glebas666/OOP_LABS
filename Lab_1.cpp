#include "Lab_1.h"
#include <iostream>

// Default constructor
String::String() : str(nullptr), size(0) {}

// Constructor with parameter
String::String(const char* newStr) {
    size = 0;
    while (newStr[size] != '\0') {
        size++;  // Calculate string size
    }

    str = new char[size + 1];  // Allocate memory for the string
    for (int i = 0; i < size; i++) {
        str[i] = newStr[i];  // Copy characters from newStr
    }
    str[size] = '\0';
}

// Destructor
String::~String() {
    delete[] str;  // Free memory allocated for the string
}

// Method to modify the string
void String::Setstr(const char* newStr) {
    delete[] str;  // Free old memory
    size = 0;
    while (newStr[size] != '\0') {
        size++;  // Calculate new string size
    }

    str = new char[size + 1];  // Allocate memory for the new string
    for (int i = 0; i < size; i++) {
        str[i] = newStr[i];  // Copy characters from newStr
    }
    str[size] = '\0';
}

// Method to print with indentation
void String::Print_at(int num_x, int num_y) {
    for (int j = 0; j < num_y; j++) {
        std::cout << std::endl;  // Print blank lines for vertical offset
    }
    for (int i = 0; i < num_x; i++) {
        std::cout << " ";  // Print spaces for horizontal offset
    }
    std::cout << str << std::endl;  // Print the string
}

// Method to compare strings
unsigned String::Strcmp(const String& other) const {
    if (str == nullptr || other.str == nullptr) return 3;  // Return unequal if either string is null

    int i = 0;
    while (i < size && i < other.size) {
        if (str[i] < other.str[i]) return 3;  // Current string is smaller
        if (str[i] > other.str[i]) return 2;  // Current string is greater
        i++;
    }

    // Compare lengths if characters match
    if (size < other.size) return 3;
    if (size > other.size) return 2;

    return 1;  // Strings are equal
}

void String::STRING() {
    delete[] str;  // Delete old string, if any
    str = nullptr;  // Set pointer to null
    size = 0;       // Set string size to 0
}
