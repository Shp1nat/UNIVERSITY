#include <iostream>
#include <vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b = 0;
    size_t n, i;
    cout << "Введите размер массива N: ";
    cin >> n;
    vector<double> arr(n);
    cout << "Введите " << n << " значений всех элементов массива A: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << "A" << i + 1 << ": ";
        cin >> a;
        arr[i] = a;
    }
    b = arr[1] - arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] != b)
        {
            b = 0;
            break;
        }
    }
    if (b == 0) cout << b;
    else
        cout << "Разность арифметической прогрессии равна " << b;
    return 0;
}