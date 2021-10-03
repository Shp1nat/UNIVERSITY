#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b,c;
    cout << "Введите значение переменной A: ";
    cin >> a;
    cout << "Введите значение переменной B: ";
    cin >> b;
    c = a;
    a = b;
    b = c;
    cout << "Теперь значение переменной А равно: " << a << endl;
    cout << "Теперь значение переменной В равно: " << b;
    return 0;
}
