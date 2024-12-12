#include <iostream>
#include "Lab_3.h"

int RunDemo() {

    // объект класса 
    ThreeDimensionalArray arr;

    std::cout << "Original array:" << std::endl;
    arr.printArray();

    // замена максимального и минимального элементов
    arr.swapMinMax();

    printf("Array after change maximum and minimum elements: \n");

    arr.printArray();

    return 0;
}