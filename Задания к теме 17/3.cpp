#include <iostream>
#include <vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, min = 100000;
    size_t n, i, k = 0;
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
    for (i = 1; i < n; i++)
    {
        if ((i % 2) == 1)
        {
            if (arr[i] < min)
            {
                min = arr[i];
                k = i;
            }
        }
    }
    k = k + 1;
    cout << "Минимальный элемент из его элементов с четными номерами = " << min << " под номером " << k;
    return 0;
}