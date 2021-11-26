#include <iostream>
#include <vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, y = 0;
    size_t n, i, j;
    cout << "Введите размер массива N: ";
    cin >> n;
    vector<double> arr(n);
    cout << "Введите " << n << " значений всех элементов массива A (массив должен содержать ровно два одинаковых элемента): " << endl;
    for (i = 0; i < n; i++)
    {
        cout << "A" << i + 1 << ": ";
        cin >> a;
        arr[i] = a;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i != j) 
            {
                if ((arr[i] == arr[j]) && (y == 0))
                {
                    cout << "Одинаковые элементы стоят на " << i + 1 << " и " << j + 1 << " местах";
                    y = 1;
                    
                }
            }
        }
    }
    return 0;
}