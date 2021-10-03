#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c,d;
    cout << "Введите значение переменной A: ";
    cin >> a;
    cout << "Введите значение переменной B: ";
    cin >> b;
    cout << "Введите значение переменной C: ";
    cin >> c;
    d = b;
    b = a;
    a = c;
    c = d;
    cout << "Теперь значение переменной A равно: " << a << endl;
    cout << "Теперь значение переменной B равно: " << b << endl;
    cout << "Теперь значение переменной C равно: " << c;
    return 0;
}