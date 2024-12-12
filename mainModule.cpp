#include <iostream>

#include "Lab_1.h"
#include "Lab_2.h"
#include "Lab_3.h"
#include "Lab_4.h"
#include "Lab_5.h"
#include "Lab_6.h"
#include "Lab_71.h"
#include "Lab_72.h"
#include <windows.h>

// ������� ��� ��������� ����� ������
void setColor(int textColor, int backgroundColor) {
	// �������� ���������� �������
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	// ������������� ���� ������ � ����
	SetConsoleTextAttribute(hConsole, (backgroundColor << 4) | textColor);
}

int main() {
	setlocale(LC_ALL, "Rus");

	int choice{ 0 };
	while (true) {
		setColor(9, 0);
		std::cout << "============[����]============\n";
		setColor(13, 0);
		std::cout << "�������� ��������� ��� �������:\n";
		setColor(7, 0);
		std::cout << "1. ��������� Lab_1\n";
		std::cout << "2. ��������� Lab_2\n";
		std::cout << "3. ��������� Lab_3\n";
		std::cout << "4. ��������� Lab_4\n";
		std::cout << "5. ��������� Lab_5\n";
		std::cout << "6. ��������� Lab_6\n";
		std::cout << "71. ��������� Lab_71\n";
		std::cout << "72. ��������� Lab_72\n";
		setColor(14, 0);
		std::cout << "-1. �������� �������\n";
		setColor(13, 0);
		std::cout << "0. �����\n";
		setColor(10, 0);
		std::cout << "��� �����: ";
		setColor(7, 0);
		std::cin >> choice;
		
		switch (choice) {
		case -1:
			system("cls");
			break;
		case 1:
			Lab_1::runDemo();
			break;
		case 2:
			Lab_2::runDemo();
			break;
		case 3:
			Lab_3::runDemo();
			break;
		case 4:
			Lab_4::runDemo();
			break;
		case 5:
			Lab_5::runDemo();
			break;
		case 6:
			Lab_6::runDemo();
			break;
		case 71:
			Lab_71::runDemo();
			break;
		case 72:
			Lab_72::runDemo();
			break;
		case 0:
			setColor(13, 0);
			std::cout << "����� �� ���������.\n";
			return 0;
		default:
			setColor(12, 0);
			std::cout << "������������ �����. ��������� �������.\n";
		}
	}
}