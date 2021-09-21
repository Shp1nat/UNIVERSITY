#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите длину прямоугольника: ";
    int a = 0;
    cin >> a;

    cout << "Введите ширину прямоугольника: ";
    int b = 0;
    cin >> b;

    cout << "Площадь прямоугольника: " << a * b;
    return 0;

}