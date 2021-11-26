#include <iostream>
#include <vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, d;
    size_t n, i;
    cout << "Введите целое число N (N > 1): ";
    cin >> n;
    cout << "Введите первый член геометрической прогрессии: ";
    cin >> a;
    cout << "Введите знаменатель геометрической прогрессии: ";
    cin >> d;
    if (n <= 1)
        cout << "Значение не удовлетворяет условию N > 1";
    else
    {
        vector<double> arr(n);
        arr[0] = a;
        for (i = 1; i < n; i++)
        {
            arr[i] = arr[i - 1] * d;
        }
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}