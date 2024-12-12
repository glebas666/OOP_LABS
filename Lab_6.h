#pragma once
#include <cstdio>

template <typename T>
class ArrayAnalyzer {
private:
    T* _Array;  // Указатель на массив элементов типа T
    int _Size;  // Размер массива

public:
    // Конструктор по умолчанию
    ArrayAnalyzer() : _Array(nullptr), _Size(0) {}

    // Конструктор с параметрами
    ArrayAnalyzer(T* tInputArr, int Size) : _Size(Size) {
        _Array = new T[_Size];
        for (int i = 0; i < _Size; ++i) {
            _Array[i] = tInputArr[i];
        }
    }

    // Деструктор
    ~ArrayAnalyzer() {
        delete[] _Array;
    }

    // Метод для подсчёта количества повторяющихся элементов
    int countDuplicateElements() const {
        int duplicateCount = 0;
        bool* counted = new bool[_Size]();

        for (int i = 0; i < _Size; ++i) {
            if (counted[i]) continue;
            bool hasDuplicate = false;

            for (int j = i + 1; j < _Size; ++j) {
                if (_Array[i] == _Array[j]) {
                    counted[j] = true;
                    hasDuplicate = true;
                }
            }

            if (hasDuplicate) {
                duplicateCount++;
            }
        }

        // Подсчитываем количество элементов, которые имеют совпадения
        for (int i = 0; i < _Size; ++i) {
            if (counted[i]) {
                duplicateCount++;
            }
        }

        delete[] counted;
        return duplicateCount;  // Возвращаем количество уникальных дубликатов
    }
};
