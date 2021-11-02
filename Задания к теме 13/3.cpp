#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n, m = 0, i, k = 1;
    cout << "Введите целое число N (N > 0): ";
    cin >> n;
    if (n <= 0)
        cout << "Введите положительное число";
    else
        cout << n << "^2 = " << n * n << " = ";
        for (i = 1; i <= n; i++)
        {   
            if (i == n) cout << k << endl;
            else
            {
                cout << k << " + ";
                k = k + 2;
            }
        }
        
        cout << "Значения сумм поэтапно: " << endl;
        k = 1;
        m = k;
        for (i = 1; i < n; i++)
        {
            k = k + 2;
            m = m + k;
            cout << i << ")" << m << endl;
        }
    return 0;
}