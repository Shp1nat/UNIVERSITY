#include <iostream>
#include <vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a;
    size_t n, i, k, l;
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
    cout << "Введите целое число K (1 <= K <= L <= N): ";
    cin >> k;
    cout << "Введите целое число L (1 <= K <= L <= N): ";
    cin >> l;
    if ((1 <= k) && (k <= l) && (l <= n))
    {
        double sum = 0, kol = 0;
        for (i = k - 1; i <= (l-1); i++)
        {
            sum = sum + arr[i];
            kol = kol + 1;
        }
        sum = sum / kol;
        cout << "Среднее арифметическое элементов от " << k << " по " << l << " элементы включительно равна " << sum;
    }
    else
        cout << "Значения не удовлетворяют неравенству";
    return 0;
}