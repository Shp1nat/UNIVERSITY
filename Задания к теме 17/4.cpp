#include <iostream>
#include <vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, max = 0;
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
    for (i = 1; i < n - 1; i++)
    {
        if ((arr[i] > arr[i - 1]) && (arr[i] > arr[i + 1]))
        {
            max = arr[i];
            k = i;
        }
    }
    k = k + 1;
    cout << "Последний локальный максимум равен " << max << " и находится под номером " << k;
    return 0;
}