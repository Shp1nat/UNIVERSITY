#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c;
    cout << "Введите переменную А: ";
    cin >> a;
    b = a * a * a;
    c = b * b;
    c = c * c * b;
    cout << "A^15 = " << a << "^15 = " << c;
    return 0;
}