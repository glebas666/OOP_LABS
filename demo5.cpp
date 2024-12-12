#include "Lab_5.h"

int main() {
    std::setlocale(LC_ALL, "ru");
    String str1;
    str1.Setstr("���������");
    str1.Print();

    String str2;
    str2.Setstr("666");
    str2.Print();

    cout << "���������� ���������� ��������� +:" << endl;
    String str6 = str1 + str2;
    str6.Print();

    cout << "�������� ��������� '<':" << endl;
    if (str1 < str2) {
        cout << "������ 1 ������ ������ 2." << endl;
    }
    else {
        cout << "������ 1 �� ������ ������ 2." << endl;
    }

    cout << "������������� ������ Setstr � ��������� ���� double:" << endl;
    String str3;
    str3.Setstr("66.66");
    str3.Print();

    cout << "������������� ������ Setstr � ����������� �������:" << endl;
    String str4;
    str4.Setstr('*', 10);
    str4.Print();

    cout << "���������� ����� STRING ��� ������ ������:" << endl;
    String str5;
    str5.STRING();
    str5.Print();

    cout << "���������� ����� Strcmp ��� ��������� �����:" << endl;
    int result1 = str1.Strcmp("���������");
    if (result1 == 0) {
        cout << "������ �����." << endl;
    }
    else {
        cout << "������ �� �����." << endl;
    }

    cout << "������ ������������� Print_at(x, y):" << endl;
    cout << "������� ������ � ��������� (3 ������ ����, 5 �������� ������):" << endl;
    str1.Print_at(3, 5);

    cout << "������� ������ ����� � �������������� Print_at:" << endl;
    String header("������:");
    String row1("1. ������ ������");
    String row2("2. ������ ������");
    String row3("3. ������ ������");

    header.Print();
    row1.Print_at(5);
    row2.Print_at(10);
    row3.Print_at(15);

    return 0;
}
