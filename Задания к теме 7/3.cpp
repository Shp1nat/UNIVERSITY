#include <iostream>
#define P 3.14
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double x, y, a, b;
    cout << "Введите массу конфет (кг): ";
    cin >> x;
    cout << "Введите стоимость конфет за эту массу (руб): ";
    cin >> a;
    cout << "Введите нужную массу конфет (кг): ";
    cin >> y;
    b = a / x;
    x = y * b;
    cout << "Цена этих конфет за 1 кг равна: " << b << " руб" << endl;
    cout << "Цена этих конфет за " << y << " кг равна " << x << " руб";
    return 0;
}