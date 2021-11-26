#include <iostream>
#include <vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b;
    size_t n, i, j;
    cout << "Введите целое число N (N > 2): ";
    cin >> n;
    cout << "Введите значение первого элемента массива: ";
    cin >> a;
    cout << "Введите значение второго элемента массива: ";
    cin >> b;
    if (n <= 2)
        cout << "Значение не удовлетворяет условию N > 2";
    else
    {
        vector<double> arr(n);
        arr[0] = a;
        arr[1] = b;
        for (i = 2; i < n; i++)
        {
            arr[i] = 0;
            for (j = 0; j < i; j++)
            {
                arr[i] = arr[i] + arr[j];
            }
        }
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}