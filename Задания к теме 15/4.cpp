#include <iostream>
using namespace std;
int Quarter(double x, double y)
{
	if (x > 0)
		if (y > 0) return 1;
		else return 4;
	else
		if (y > 0) return 2;
		else return 3;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
	for (int i = 1; i <= 4; i++)
	{
		cout << "Введите ненулевую координату X: ";
		cin >> x;
		cout << "Введите ненулевую координату Y: ";
		cin >> y;
		if ((x == 0) || (y == 0))
			cout << "Как минимум одна координата нулевая" << endl;
		else
			cout << "Точка лежит в " << Quarter(x, y) << " четверти" << endl;
	}
	return 0;
}
