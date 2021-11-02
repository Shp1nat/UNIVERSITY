#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n, i;
    double a, k = 0, l = 0;
    cout << "Введите вещественное число A: ";
    cin >> a;
    cout << "Введите целое число N (N > 0): ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Введите положительное значение N";
    }
    else
    {
        for (i = 0; i <= n; i++)
        { 
            k = pow(a, i);
            l = l + k;
        }
        cout << "1 + " << a << " + "<< a << "^2 + " << a << "^3 + . . . + " << a << "^" << n << " = " << l;
    }
    return 0;
}