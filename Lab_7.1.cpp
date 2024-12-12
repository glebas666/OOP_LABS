#include "Lab_7.1.h"
#include <iostream> 

// ����������� �� ���������
String::String() : str(nullptr), size(0) {}

// ����������� � ����������
String::String(const char* newStr) {
    size = 0;
    while (newStr[size] != '\0') {
        size++;  // ��������� ������ ������
    }

    str = new char[size + 1];  // �������� ������ ��� ������
    for (int i = 0; i < size; i++) {
        str[i] = newStr[i];  // �������� ������� �� newStr
    }
    str[size] = '\0';
}

// ����������
String::~String() {
    delete[] str;  // ����������� ������, ���������� ��� ������
}

// ����� ��� ��������� ������
void String::Setstr(const char* newStr) {
    delete[] str;  // ����������� ������ ������
    size = 0;
    while (newStr[size] != '\0') {
        size++;  // ��������� ����� ������ ������
    }

    str = new char[size + 1];  // �������� ������ ��� ����� ������
    for (int i = 0; i < size; i++) {
        str[i] = newStr[i];  // �������� ������� �� newStr
    }
    str[size] = '\0';  
}

// ���������� ��������� ������ <<
std::ostream& operator<<(std::ostream& os, const String& obj) {
    if (obj.str != nullptr) {
        for (int i = 0; i < obj.size; i++) {
            os << obj.str[i];  // ������� ������ ������ ������
        }
    }
    return os;
}
// ���������� ��������� ����� >>
std::istream& operator>>(std::istream& is, String& obj) {
    char buffer[256];  // ��������� ����� ��� ������ ������
 // ������ ������ ������ �� �������� �� ������� ������� ��� ����� ������
int i = 0;
char ch;
while (is.get(ch) && ch != '\n') {
    buffer[i++] = ch;
}
buffer[i] = '\0';  // ��������� ������ ������� ��������

    // ������������� ������ ����� Setstr
    obj.Setstr(buffer);
    return is;
}

// ����� ��� ������ � ��������
void String::Print_at(int num_x, int num_y) {
    for (int j = 0; j < num_y; j++) {
        std::cout << std::endl;  // �������� ������� ��� ������� ����
    }
    for (int i = 0; i < num_x; i++) {
        std::cout << " ";  // �������� ������� ��� �������
    }
    std::cout << str << std::endl;  // ������� ������
}

// ����� ��� ��������� �����
unsigned String::Strcmp(const String& other) const {
    if (str == nullptr || other.str == nullptr) return 3;  // ���� ���� �� ����� ������, �������, ��� ��� �� �����

    int i = 0;
    while (i < size && i < other.size) {
        if (str[i] < other.str[i]) return 3;  // ������� ������ ������
        if (str[i] > other.str[i]) return 2;  // ������� ������ ������
        i++;
    }

    // ���� ����� ����� ������
    if (size < other.size) return 3;
    if (size > other.size) return 2;

    return 1;  // ������ �����
}

void String:: STRING() {
    delete[] str;  // ������� ������ ������, ���� ��� ����
    str = nullptr;  // ������������� ��������� � nullptr
    size = 0;       // ������ ������ ����� 0
}
