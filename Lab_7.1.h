#pragma once
#include <iostream>
using namespace std;

class String {
protected:
    char* str; // ��������� �� ������
    int size;  // ������ ������

public:
    String();                      // ����������� �� ���������
    String(const char* newStr);     // ����������� � ����������
    ~String();                     // ����������

   void STRING();

    void Setstr(const char* newStr); // ����� ��� ��������� ������
    void Print_at(int num_x, int num_y);  // ����� ��� ������ � �������� (��� ������������)
    unsigned Strcmp(const String& other) const;  // ����� ��� ��������� �����

    friend ostream& operator<<(ostream& os, const String& obj); // ���������� ��������� ������ <<
    friend istream& operator>>(istream& is, String& obj);       // ���������� ��������� ����� >>
};
