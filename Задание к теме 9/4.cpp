﻿#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, d, e;
	cout << "Введите целое положительное число A: ";
	cin >> a;
	cout << "Введите целое положительное число B: ";
	cin >> b;
	cout << "Введите целое положительное число C: ";
	cin >> c;
	if ((a < 1) || (b < 1) || (c < 1))
	{

		cout << "Как минимум одно число не положительное";
	}
	else
	{
		d = (a / c) * (b / c);
		e = a * b - c * c * d;
		cout << "Количество квадратов со стороной " << c << ", размещенных на прямоугольнике без наложений: " << d << endl;
		cout << "Площадь незанятой части прямоугольника: " << e;
	}
	return 0;
}