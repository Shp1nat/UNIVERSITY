#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, i = 0;
	cout << "Введите целое положительное число A (A < B): ";
	cin >> a;
	cout << "Введите целое положительное число B (A < B): ";
	cin >> b;
	if ((a >= b) || (a < 1) || (b < 1))
		cout << "Как минимум одно из значений не удовлетворяет ограничению";
	else
		for (a; a <= b; a++)
		{
			for (i = 1; i <= a; i++)
			{
				cout << a << " ";
			}
			cout << endl;
		}
	return 0;
}