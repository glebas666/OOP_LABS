#pragma once

#include <iostream>

class ThreeDimensionalArray {
private:
    int*** array;  // Динамический трехмерный массив
    const int sizeX = 2, sizeY = 2, sizeZ = 2;

public:
    ThreeDimensionalArray();   // Конструктор
    ~ThreeDimensionalArray();  // Деструктор

    void printArray() const;   // Метод для вывода массива
    void swapMinMax();         // Метод для замены максимального и минимального элементов
};