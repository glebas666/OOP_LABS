#include "Lab_2.h"
#include <iostream>

// �����������
ThreeDimensionalArray::ThreeDimensionalArray() {
    // ������������� ���������� �� �������
    for (int i = 0; i < sizeX; ++i) {
        for (int j = 0; j < sizeY; ++j) {
            ptrs[i][j] = array[i][j];
        }
    }

    // ���������� ������� ����������
    for (int i = 0; i < sizeX; ++i) {
        for (int j = 0; j < sizeY; ++j) {
            for (int k = 0; k < sizeZ; ++k) {
                std::cout << "Enter element: ";
                std::cin >> array[i][j][k];
            }
        }
    }
}

// ����� ��� ������ �������
void ThreeDimensionalArray::printArray() const {
    for (int i = 0; i < sizeX; ++i) {
        for (int j = 0; j < sizeY; ++j) {
            for (int k = 0; k < sizeZ; ++k) {
                std::cout << *(*(ptrs[i] + j) + k) << " ";
            }
            std::cout << std::endl;
        }
        std::cout << "---------------" << std::endl;
    }
}

// ����� ��� ������ ������������� � ������������ ���������
void ThreeDimensionalArray::swapMinMax() {
    int minValue = array[0][0][0];
    int maxValue = array[0][0][0];
    int* minPtr = &array[0][0][0];
    int* maxPtr = &array[0][0][0];

    // ����� ������������ � ������������� ���������
    for (int i = 0; i < sizeX; ++i) {
        for (int j = 0; j < sizeY; ++j) {
            for (int k = 0; k < sizeZ; ++k) {
                int* currentPtr = &array[i][j][k];
                if (*currentPtr < minValue) {
                    minValue = *currentPtr;
                    minPtr = currentPtr;
                }
                if (*currentPtr > maxValue) {
                    maxValue = *currentPtr;
                    maxPtr = currentPtr;
                }
            }
        }
    }

    // ������ �������� ����� ���������
    int temp = *minPtr;
    *minPtr = *maxPtr;
    *maxPtr = temp;
}
