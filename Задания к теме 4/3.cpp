#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Russian");
    cout << "Введите первое число: ";
    double a = 0;
    cin >> a;

    cout << "Введите второе число: ";
    double b = 0;
    cin >> b;

    cout << "Среднее арифметическое: " << (a + b) / 2;
    return 0;

}