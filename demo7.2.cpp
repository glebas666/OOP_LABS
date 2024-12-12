#include <iostream>
#include <fstream>
#include "Lab_7.2.h"

int main() {
    std::setlocale(LC_ALL, "ru");

    // Создаем объект класса FormattedOutput
    FormattedOutput formattedData;

    // Ввод данных с использованием перегруженного оператора >>
    std::cin >> formattedData;

    // Выводим на экран
    std::cout << "Вывод на экран:\n";
    std::cout << formattedData;

    // Записываем в файл
    std::ofstream outfile("output.txt");
    if (outfile.is_open()) {
        outfile << "Результат:\n";
        outfile << formattedData;
        outfile.close();
        std::cout << "Данные записаны в файл output.txt" << std::endl;
    }
    else {
        std::cerr << "Не удалось открыть файл для записи!" << std::endl;
    }

    return 0;
}
