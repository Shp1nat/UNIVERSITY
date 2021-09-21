#include <iostream>

using namespace std;

int main()
{
    const double p = 3.14;
    setlocale(LC_ALL, "Russian");
    cout << "Введите диаметр окружности: ";
    double d = 0;
    cin >> d;

    cout << "Длина окружности: " << p * d;
    return 0;

}