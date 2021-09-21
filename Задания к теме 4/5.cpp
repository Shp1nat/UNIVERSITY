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
    a = abs(a);
    b = abs(b);



    cout << "Сумма модулей: " << a + b << endl;
    cout << "Разность модулей: " << a - b << endl;
    cout << "Произведение модулей: " << a * b << endl;
    cout << "Частное модулей " << a / b << endl;
    return 0;

}