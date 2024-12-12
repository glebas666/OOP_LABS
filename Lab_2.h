#include <iostream>

class ThreeDimensionalArray {
private:
    static const int sizeX = 2, sizeY = 2, sizeZ = 2;
    int array[sizeX][sizeY][sizeZ]; // ����������� ������
    int* ptrs[sizeX][sizeY];    // ��������� ��� ������� ������ �������

public:
    ThreeDimensionalArray();   // �����������

    void printArray() const;   // ����� ��� ������ �������
    void swapMinMax();         // ����� ��� ������ ������������� � ������������ ���������
};
