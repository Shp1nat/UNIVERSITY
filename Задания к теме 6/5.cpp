#include <iostream>
using namespace std;

double a(double b)
{
    return 4 * pow((b-3), 6) - 7 * pow((b-3), 3) + 2;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    double x, y;
    cout << "y=4(x-3)^6-7(x-3)^3+2" << endl;
    cout << "Введите значение x: ";
    cin >> x;
    y = a(x);
    cout << "При x = " << x << ", y = " << y;
    return 0;
}