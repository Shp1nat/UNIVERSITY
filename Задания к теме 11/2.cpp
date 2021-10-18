#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Введите третье число: ";
	cin >> c;
	if (a > b)
	{
		if (b > c)
		{
			a = a + b;
			cout << "Сумма двух наибольших из них: " << a;
		}
		else
		{
			a = a + c;
			cout << "Сумма двух наибольших из них: " << a;
		}
	}
	else
	{
		if (b < c)
		{
			a = b + c;
		}
		else
		{
			if (a > c)
			{
				a = a + b;
				cout << "Сумма двух наибольших из них: " << a;
			}
			else
			{
				a = c + b;
				cout << "Сумма двух наибольших из них: " << a;
			}
		}
	}
	
	return 0;
}