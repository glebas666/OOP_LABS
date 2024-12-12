#include <iostream>

class ThreeDimensionalArray {
private:
    static const int sizeX = 2, sizeY = 2, sizeZ = 2;
    int array[sizeX][sizeY][sizeZ]; // Статический массив
    int* ptrs[sizeX][sizeY];    // Указатели для второго уровня доступа

public:
    ThreeDimensionalArray();   // Конструктор

    void printArray() const;   // Метод для вывода массива
    void swapMinMax();         // Метод для замены максимального и минимального элементов
};
