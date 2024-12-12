#include <iostream>
#include "Lab_4.h"
#include "Lab_4.2.h"

int main() {
    setlocale(LC_ALL, "ru");

    // Создаем объекты через указатели на базовый класс
    String *str1 = new String("Александра");
    String *str2 = new DautherString("Александр");

    std::cout << "Вывод тестовых слов для использования их в методе сравнения с помощью метода Print:" << std::endl;

    // Вызов виртуальных методов

    str1->Print();
    str2->Print();

    str2->Strcmp(str1->GetStrView());


    str1->SetStr("строка 0;");

    str2->SetStr("замена строки 0(строка 1);");

    str2->SetStr("замена строки 1(строка 2);");



    str1->Print_at(5, 7);

    str1->STRING();
    str2->STRING();
 
    delete str1;
    delete str2;

    return 0;
}
