#include <iostream>
#include "Lab_2.h"

int main() {
    // ������ ������ 
    ThreeDimensionalArray arr;

    std::cout << "Original array:" << std::endl;
    arr.printArray();

    // ������ ������������� � ������������ ���������
    arr.swapMinMax();

    std::cout << "Array after change maximum and minimum elements:" << std::endl;
    arr.printArray();

    return 0;
}
