#pragma once
#include <cstdio>

class FrameDrawer {
public:
    // Метод для вывода заголовка
    static void drawHeader(const char* title) {
        printf("+---------------------------------------------------+\n");
        printf("| %-49s |\n", title);  
        printf("+---------------------------------------------------+\n");
    }

    // Шаблонный метод для вывода содержимого массива
    template <typename T>
    static void drawArray(const T* array, int size) {
        printf("| ");
        for (int i = 0; i < size; ++i) {
            printElement(array[i]);  // Вызываем перегруженный метод для вывода
            printf(" ");  // Добавляем пробел между элементами
        }
        printf(" |\n");
        printf("+---------------------------------------------------+\n");
    }

private:
    // Для целых чисел (int)
    static void printElement(int value) {
        printf("%d", value);
    }

    // Для символов (char)
    static void printElement(char value) {
        printf("%c", value);
    }

};
