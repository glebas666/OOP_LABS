#include <iostream>
#include "Lab_3.h"

int RunDemo() {

    // ������ ������ 
    ThreeDimensionalArray arr;

    std::cout << "Original array:" << std::endl;
    arr.printArray();

    // ������ ������������� � ������������ ���������
    arr.swapMinMax();

    printf("Array after change maximum and minimum elements: \n");

    arr.printArray();

    return 0;
}