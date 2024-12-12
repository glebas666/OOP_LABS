#include <iostream>
#include "Lab_4.h"
#include "Lab_4.2.h"

int main() {
    setlocale(LC_ALL, "ru");

    // ������� ������� ����� ��������� �� ������� �����
    String *str1 = new String("����������");
    String *str2 = new DautherString("���������");

    std::cout << "����� �������� ���� ��� ������������� �� � ������ ��������� � ������� ������ Print:" << std::endl;

    // ����� ����������� �������

    str1->Print();
    str2->Print();

    str2->Strcmp(str1->GetStrView());


    str1->SetStr("������ 0;");

    str2->SetStr("������ ������ 0(������ 1);");

    str2->SetStr("������ ������ 1(������ 2);");



    str1->Print_at(5, 7);

    str1->STRING();
    str2->STRING();
 
    delete str1;
    delete str2;

    return 0;
}
