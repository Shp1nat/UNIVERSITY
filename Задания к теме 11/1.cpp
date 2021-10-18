#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите целое значение переменной A: ";
	cin >> a;
	cout << "Введите целое значение переменной B: ";
	cin >> b;
	if (a == b)
	{
		a = 0;
		b = 0;
		cout << "Новое значение переменной A: " << a << endl;
		cout << "Новое значение переменной B: " << b;
	}
	else
	{
		if (a > b)
		{
			b = a;
		}
		else
		{
			a = b;
		}
		cout << "Новое значение переменной A: " << a << endl;
		cout << "Новое значение переменной B: " << b;
	}
	return 0;
}