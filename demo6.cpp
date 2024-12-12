#include <cstdio>
#include "Lab_6.h"
#include "FrameDrawer.h"

int main() {
    const int Size = 10;  
    int* IntArray = new int[Size];

    printf("Enter %d elements of the array:\n", Size);
    for (int i = 0; i < Size; ++i) {
        printf("Element %d: ", i);
        scanf_s("%d", &IntArray[i]);   // ���� �������� �������
    }

    // ����� ������� � �����
    FrameDrawer::drawHeader("Int Array");
    FrameDrawer::drawArray(IntArray, Size);

    ArrayAnalyzer<int> intArray(IntArray, Size);

    // ������������ ���������� ���������, ������� ����������
    int duplicateCount = intArray.countDuplicateElements();
    printf("Number of elements with duplicates: %d\n", duplicateCount);

    // ���� ������ ��� ������� ��������
    char* charArray = new char[Size];
    printf("\nEnter %d char elements of the array:\n", Size);
    for (int i = 0; i < Size; ++i) {
        printf("Element %d: ", i);
        scanf_s(" %c", &charArray[i]);  // ���� ��������
    }

    // ����� ������� �������� � �����
    FrameDrawer::drawHeader("Char Array");
    FrameDrawer::drawArray(charArray, Size);

    // ����������� ������ ��������
    ArrayAnalyzer<char> charArrayAnalyzer(charArray, Size);
    int duplicateCountChar = charArrayAnalyzer.countDuplicateElements();
    printf("Number of duplicate elements in char array: %d\n", duplicateCountChar);

    delete[] IntArray;
    delete[] charArray;

    return 0;
}
