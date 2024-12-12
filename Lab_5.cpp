#include "Lab_5.h"

// ����������� �� ���������
String::String() : str(nullptr), size(0) {}

// ����������� � ����������
String::String(const char* newStr) {
    size = 0;
    while (newStr[size] != '\0') size++;

    str = new char[size + 1];
    for (int i = 0; i < size; i++) {
        str[i] = newStr[i];
    }
    str[size] = '\0';
}

// ����������
String::~String() {
    delete[] str;
}

// ����� ��� ��������� ������
void String::Setstr(const char* newStr) {
    delete[] str;
    size = 0;
    while (newStr[size] != '\0') size++;

    str = new char[size + 1];
    for (int i = 0; i < size; i++) {
        str[i] = newStr[i];
    }
    str[size] = '\0';
}

// ���������� ������ �� �������������� �������
void String::Setstr(char ch, int count) {
    delete[] str;
    size = count;

    str = new char[size + 1];
    for (int i = 0; i < size; i++) {
        str[i] = ch;
    }
    str[size] = '\0';
}

void String::STRING() {
    delete[] str;
    size = 0;

    str = new char[1];
    str[0] = '\0';
}

// ����� ��� ������ ������
void String::Print() const {
    if (str != nullptr) {
        for (int i = 0; i < size; i++) {
            cout << str[i];
        }
    }
    cout << endl;
}

// ����� ��� ��������� �����
unsigned String::Strcmp(const char* other) const {
    if (strcmp(str, other) == 0) return 1;
    return (strcmp(str, other) > 0) ? 2 : 3;
}

// ���������� ������� ���� int
unsigned String::Strcmp(int num) const {
    char numStr[50];
    sprintf_s(numStr, "%d", num);
    return strcmp(str, numStr);
}

// ���������� ������� ���� double
unsigned String::Strcmp(double num) const {
    char numStr[50];
    sprintf_s(numStr, "%f", num);
    return strcmp(str, numStr);
}

// ����� ��� ������ ������ �� ����������
void String::Print_at(int x, int y) const {
    for (int i = 0; i < x; i++) {
        cout << endl;
    }
    for (int i = 0; i < y; i++) {
        cout << " ";
    }
    cout << "*" << endl;
}

void String::Print_at(int num) const {
    for (int i = 0; i < num; i++) {
        cout << " ";
    }
    cout << str << endl;
}

// ���������� ��������� ��������
String String::operator+(const String& other) const {
    int newSize = size + other.size;
    char* newStr = new char[newSize + 1];

    // �������� ������ ������
    for (int i = 0; i < size; i++) {
        newStr[i] = str[i];
    }
    // �������� ������ ������
    for (int i = 0; i < other.size; i++) {
        newStr[size + i] = other.str[i];
    }
    newStr[newSize] = '\0';

    String result(newStr);
    delete[] newStr;
    return result;
}

// �������� <
bool String::operator<(const String& other) const {
    int minSize = (size < other.size) ? size : other.size;

    // ��������� �����������
    for (int i = 0; i < minSize; i++) {
        if (str[i] < other.str[i]) {
            return true;
        }
        else if (str[i] > other.str[i]) {
            return false;
        }
    }

    // ���� ������� ���������, ���������� �����
    return size < other.size;
}
