#include "Lab_3.h"

// �����������
ThreeDimensionalArray::ThreeDimensionalArray()
{
    array = new int** [sizeX];
    for (int i = 0; i < sizeX; ++i) {
        array[i] = new int* [sizeY];
        for (int j = 0; j < sizeY; ++j) {
            array[i][j] = new int[sizeZ];
        }
    }

    for (int i = 0; i < sizeX; ++i) {
        for (int j = 0; j < sizeY; ++j) {
            for (int k = 0; k < sizeZ; ++k) {
                std::cout << "Enter element: ";
                std::cin >> array[i][j][k];
            }
        }
    }
}

ThreeDimensionalArray::~ThreeDimensionalArray()
{
    for (int i = 0; i < sizeX; ++i) {
        for (int j = 0; j < sizeY; ++j) {
            delete[] array[i][j];
        }

    }
    delete[] array;
}

// ����� ��� ������ �������
void ThreeDimensionalArray::printArray() const
{
    for (int i = 0; i < sizeX; ++i) {
        for (int j = 0; j < sizeY; ++j) {
            for (int k = 0; k < sizeZ; ++k) {
                std::cout << array[i][j][k] << " ";
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
    int minPosition[3] = { 0, 0, 0 };
    int maxPosition[3] = { 0, 0, 0 };

    // ���� ������������ � ����������� ��������
    for (int i = 0; i < sizeX; ++i) {
        for (int j = 0; j < sizeY; ++j) {
            for (int k = 0; k < sizeZ; ++k) {
                if (array[i][j][k] < minValue) {
                    minValue = array[i][j][k];
                    minPosition[0] = i;
                    minPosition[1] = j;
                    minPosition[2] = k;
                }
                if (array[i][j][k] > maxValue) {
                    maxValue = array[i][j][k];
                    maxPosition[0] = i;
                    maxPosition[1] = j;
                    maxPosition[2] = k;
                }
            }
        }
    }

    //������� ������ �������
    std::swap(array[minPosition[0]][minPosition[1]][minPosition[2]], array[maxPosition[0]][maxPosition[1]][maxPosition[2]]);
}