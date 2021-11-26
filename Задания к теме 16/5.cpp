#include <iostream>
#include <vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a;
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
    for (i = 0; i < n; i = i + 2)
    {
        cout << arr[i] << " ";
    }
    if ((n % 2) == 0)
    {
        for (i = 0; i < n; i = i + 2)
        {
            cout << arr[n - i - 1] << " ";
        }
    }
    else
    {
        for (i = 1; i < n; i = i + 2)
        {
            cout << arr[n - i - 1] << " ";
        }
    }
    return 0;
}