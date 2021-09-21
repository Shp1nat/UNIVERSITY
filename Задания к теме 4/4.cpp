#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Russian");
    cout << "Введите первое ненулевое число: ";
    double a = 0;
    cin >> a;

    cout << "Введите второе ненулевое число: ";
    double b = 0;
    cin >> b;

    a = a * a;
    b = b * b;

    cout << "Сумма квадратов: " << a + b << endl;
    cout << "Разность квадратов: " << a - b << endl;
    cout << "Произведение квадратов: " << a * b << endl;
    cout << "Частное квадратов " << a / b << endl;
    return 0;

}