#include <iostream>
#include <fstream>
#include "Lab_7.2.h"

int main() {
    std::setlocale(LC_ALL, "ru");

    // ������� ������ ������ FormattedOutput
    FormattedOutput formattedData;

    // ���� ������ � �������������� �������������� ��������� >>
    std::cin >> formattedData;

    // ������� �� �����
    std::cout << "����� �� �����:\n";
    std::cout << formattedData;

    // ���������� � ����
    std::ofstream outfile("output.txt");
    if (outfile.is_open()) {
        outfile << "���������:\n";
        outfile << formattedData;
        outfile.close();
        std::cout << "������ �������� � ���� output.txt" << std::endl;
    }
    else {
        std::cerr << "�� ������� ������� ���� ��� ������!" << std::endl;
    }

    return 0;
}
