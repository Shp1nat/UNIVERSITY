#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, k;
	cout << "Введите число Фибонначи (N > 1): ";
	cin >> n;
	int arr[100];
	if (n <= 1)
		cout << "Как минимум одно из значений не удовлетворяет ограничению";
	else
	{
		arr[0] = 0;
		arr[1] = 1;
		for (k = 2; arr[k - 1] != n; k++)
		{
			arr[k] = arr[k - 1] + arr[k - 2];
		}
		cout << "Порядковый номер числа Фибоначчи: " << k;
	}
	return 0;
}