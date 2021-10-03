#include <iostream>
#define P 3.14
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double v1, v2, s, t;
    cout << "Введите скорость первого автомобиля (км/ч): ";
    cin >> v1;
    cout << "Введите скорость второго автомобиля (км/ч): ";
    cin >> v2;
    cout << "Введите расстояние между автомобилями (км): ";
    cin >> s;
    cout << "Введите время (ч): ";
    cin >> t;
    s = s + (v1 + v2) * t;
    cout << "Расстояние между автомобилями через " << t << " ч будет равно: " << s;
    return 0;
}