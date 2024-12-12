#pragma once
#include <cstdio>

template <typename T>
class ArrayAnalyzer {
private:
    T* _Array;  // ��������� �� ������ ��������� ���� T
    int _Size;  // ������ �������

public:
    // ����������� �� ���������
    ArrayAnalyzer() : _Array(nullptr), _Size(0) {}

    // ����������� � �����������
    ArrayAnalyzer(T* tInputArr, int Size) : _Size(Size) {
        _Array = new T[_Size];
        for (int i = 0; i < _Size; ++i) {
            _Array[i] = tInputArr[i];
        }
    }

    // ����������
    ~ArrayAnalyzer() {
        delete[] _Array;
    }

    // ����� ��� �������� ���������� ������������� ���������
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

        // ������������ ���������� ���������, ������� ����� ����������
        for (int i = 0; i < _Size; ++i) {
            if (counted[i]) {
                duplicateCount++;
            }
        }

        delete[] counted;
        return duplicateCount;  // ���������� ���������� ���������� ����������
    }
};
