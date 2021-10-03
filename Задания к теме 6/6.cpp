#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a,b;
    cout << "Введите переменную А: ";
    cin >> a;
    b = a * a;
    b = b * b;
    b = b * b;
    cout << "A^8 = " << a << "^8 = " << b;
    return 0;
}