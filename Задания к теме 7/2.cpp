#include <iostream>
#define P 3.14
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, r;
    cout << "Введите значение угла в радианах (от 0 до 2п(6.28): ";
    cin >> r;
    if (r < 0 || r>6.28)
    {
        cout << "Значение не удовлетворяет ограничениям.";
    }
    else
    {
        a = r * 180 / P;
        cout << "Значение этого угла в радианах будет равно: " << a;
    }
    return 0;
}