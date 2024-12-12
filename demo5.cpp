#include "Lab_5.h"

int main() {
    std::setlocale(LC_ALL, "ru");
    String str1;
    str1.Setstr("Александр");
    str1.Print();

    String str2;
    str2.Setstr("666");
    str2.Print();

    cout << "Используем перегрузку оператора +:" << endl;
    String str6 = str1 + str2;
    str6.Print();

    cout << "Проверка оператора '<':" << endl;
    if (str1 < str2) {
        cout << "Строка 1 меньше строки 2." << endl;
    }
    else {
        cout << "Строка 1 не меньше строки 2." << endl;
    }

    cout << "Использование метода Setstr с символами типа double:" << endl;
    String str3;
    str3.Setstr("66.66");
    str3.Print();

    cout << "Использование метода Setstr с повторением символа:" << endl;
    String str4;
    str4.Setstr('*', 10);
    str4.Print();

    cout << "Используем метод STRING для пустой строки:" << endl;
    String str5;
    str5.STRING();
    str5.Print();

    cout << "Используем метод Strcmp для сравнения строк:" << endl;
    int result1 = str1.Strcmp("Александр");
    if (result1 == 0) {
        cout << "Строки равны." << endl;
    }
    else {
        cout << "Строки не равны." << endl;
    }

    cout << "Пример использования Print_at(x, y):" << endl;
    cout << "Выводим строку с отступами (3 строки вниз, 5 пробелов вправо):" << endl;
    str1.Print_at(3, 5);

    cout << "Создаем список строк с использованием Print_at:" << endl;
    String header("Список:");
    String row1("1. Первая строка");
    String row2("2. Вторая строка");
    String row3("3. Третья строка");

    header.Print();
    row1.Print_at(5);
    row2.Print_at(10);
    row3.Print_at(15);

    return 0;
}
