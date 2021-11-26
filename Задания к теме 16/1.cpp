#include <iostream>
#include <vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    size_t n, i;
    cout << "Введите размер массива N (N > 0): ";
    cin >> n;
    if (n <= 0)
        cout << "Значение не удовлетворяет условию N > 0";
    else
    {
        vector<int> arr(n);
        arr[0] = 1;
        for (i = 1; i < n; i++)
        {
            arr[i] = arr[i - 1] + 2;
        }
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}