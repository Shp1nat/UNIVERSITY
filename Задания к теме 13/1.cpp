#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, i;
    cout << "Введите цену 1 кг конфет (вещественное число): ";
    cin >> a;
    if (a < 0)
        cout << "Введите неотрицательное значение";
    else
        for (i = 0.1; i <= 1; i = i + 0.1)
        {
            cout << "Цена за " << i << " кг конфет: " << (a * i) << endl;
        }
    return 0;
}