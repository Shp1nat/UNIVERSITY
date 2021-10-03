#include <iostream>
using namespace std;

double a(double b)
{
    return 3 * pow(b, 6) - 6 * pow(b, 2) - 7;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    double x, y;
    cout << "y=3x^6-6x^2-7" << endl;
    cout << "Введите значение x: ";
    cin >> x;
    y = a(x);
    cout << "При x = " << x << ", y = " << y;
    return 0;
}