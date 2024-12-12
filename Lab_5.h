#pragma once

#include <iostream>
using namespace std;

class String {
protected:
    char* str;    // ��������� �� ������
    int size;     // ������ ������

public:
    String();                             // ����������� �� ���������
    String(const char* newStr);           // ����������� � ����������
    ~String();                            // ����������

    void Setstr(const char* newStr);      // ���������� ������
    void Setstr(char ch, int count);      // ���������� ������ �� �������������� �������

    void STRING();                        // ������������� ������ ������

    void Print() const;                   // ����� ������

    unsigned Strcmp(const char* other) const;
    unsigned Strcmp(int num) const;
    unsigned Strcmp(double num) const;

    void Print_at(int x, int y) const;    // ������ �� ����������
    void Print_at(int num) const;         // ���������� ��� �������� ��������

    String operator+(const String& other) const; // ���������� ��������� ��������
    bool operator<(const String& other) const;   // ������
};
