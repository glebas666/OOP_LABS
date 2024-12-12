#pragma once
#include <cstdio>

class FrameDrawer {
public:
    // ����� ��� ������ ���������
    static void drawHeader(const char* title) {
        printf("+---------------------------------------------------+\n");
        printf("| %-49s |\n", title);  
        printf("+---------------------------------------------------+\n");
    }

    // ��������� ����� ��� ������ ����������� �������
    template <typename T>
    static void drawArray(const T* array, int size) {
        printf("| ");
        for (int i = 0; i < size; ++i) {
            printElement(array[i]);  // �������� ������������� ����� ��� ������
            printf(" ");  // ��������� ������ ����� ����������
        }
        printf(" |\n");
        printf("+---------------------------------------------------+\n");
    }

private:
    // ��� ����� ����� (int)
    static void printElement(int value) {
        printf("%d", value);
    }

    // ��� �������� (char)
    static void printElement(char value) {
        printf("%c", value);
    }

};
