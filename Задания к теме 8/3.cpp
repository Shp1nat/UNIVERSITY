#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите целое положительное число A (A > B): ";
	cin >> a;
	cout << "Введите целое положительное число B (A > B): ";
	cin >> b;
	if ((a <= 0) || (b <= 0))
	{
		cout << "Как минимум одно из значений не положительное";
	}
	else
	{
		if (a > b)
		{
			c = a / b;
			a = a - b * c;
			cout << "Длина незанятой части отрезка A: " << a;
		}
		else
		{
			cout << "Значения не удовлетворяют условию A > B";
		}
	}
	return 0;
}