#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	double a, b, c, ac, bc, sum;
	setlocale(LC_ALL, "Russian");
	cout << "Введите значение точки A на числовой оси: ";
	cin >> a;
	cout << "Введите значение точки B на числовой оси: ";
	cin >> b;
	cout << "Введите значение точки C на числовой оси: ";
	cin >> c;
	cout << " " << endl;
	ac = abs(a - c);
	bc = abs(b - c);
	sum = ac + bc;
	cout << "Длина отрезка AC: " << ac << endl;
	cout << "Длина отрезка BC: " << bc << endl;
	cout << "Сумма отрезков AC и BC: " << sum << endl;
	return 0;
}