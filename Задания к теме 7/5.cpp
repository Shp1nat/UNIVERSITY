#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, x;
    x = 0;
    cout << "A*x+B=0" << endl;
    cout << "Введите коэффициент A (A != 0): ";
    cin >> a;
    cout << "Введите коэффициент B: ";
    cin >> b;
    if (a == 0)
    {
        cout << "Значение A не удовлетворяет ограничению A != 0";
    }
    else
    {
        x = (-b) / a;
    }
    cout << "x = " << x; 
    return 0;
}