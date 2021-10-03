#include <iostream>
#define P 3.14
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, r;
    cout << "Введите значение угла в градусах (от 0 до 360): ";
    cin >> a;
    if (a < 0 || a>360)
    {
        cout << "Значение не удовлетворяет ограничениям.";
    }
    else
    {
        r = a * P / 180;
        cout << "Значение этого угла в радианах будет равно: " << r;
    }
    return 0;
}