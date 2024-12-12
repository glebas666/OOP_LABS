#pragma once

#include <iostream>

class ThreeDimensionalArray {
private:
    int*** array;  // ������������ ���������� ������
    const int sizeX = 2, sizeY = 2, sizeZ = 2;

public:
    ThreeDimensionalArray();   // �����������
    ~ThreeDimensionalArray();  // ����������

    void printArray() const;   // ����� ��� ������ �������
    void swapMinMax();         // ����� ��� ������ ������������� � ������������ ���������
};