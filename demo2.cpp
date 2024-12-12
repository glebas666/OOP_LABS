#include <iostream>
#include "Lab_2.h"

int main() {
    // Объект класса 
    ThreeDimensionalArray arr;

    std::cout << "Original array:" << std::endl;
    arr.printArray();

    // Замена максимального и минимального элементов
    arr.swapMinMax();

    std::cout << "Array after change maximum and minimum elements:" << std::endl;
    arr.printArray();

    return 0;
}
