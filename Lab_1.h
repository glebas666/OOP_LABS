#pragma once
#include <iostream>
using namespace std;

class String {
protected:
    char* str; // Pointer to the string
    int size;  // Size of the string

public:
    String();                      // Default constructor
    String(const char* newStr);    // Constructor with parameter
    ~String();                     // Destructor

    void STRING();

    void Setstr(const char* newStr); // Method to modify the string
    void Print_at(int num_x, int num_y);  // Method to print with indentation
    unsigned Strcmp(const String& other) const;  // Method to compare strings
};
#pragma once
