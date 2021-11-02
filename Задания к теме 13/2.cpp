#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n,i;
    double b = 1, a = 1.1;
    cout << "Введите целое число N (N > 0): ";
    cin >> n;
    if (n <= 0)
        cout << "Введите положительное число";
    else
        for (i = 1; i <= n; i++)
        {
            b = b * a;
            a = a + 0.1;
        }
    cout << "Произведение 1.1 · 1.2 · 1.3 · . . . (" << n << " сомножителей) будет равно : " << b;
    return 0;
}