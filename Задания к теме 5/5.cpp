#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	double x1, y1, x2, y2, x3, y3, a, b, c, P, S,pol;
	setlocale(LC_ALL, "Russian");
	cout << "Введите координату X первой точки треугольника: ";
	cin >> x1;
	cout << "Введите координату Y первой точки треугольника: ";
	cin >> y1;
	cout << "Введите координату X второй точки треугольника: ";
	cin >> x2;
	cout << "Введите координату Y второй точки треугольника: ";
	cin >> y2;
	cout << "Введите координату X третий точки треугольника: ";
	cin >> x3;
	cout << "Введите координату Y третий точки треугольника: ";
	cin >> y3;
	cout << " " << endl;
	a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	P = a + b + c;
	pol = P / 2;
	S = sqrt(pol * (pol-a)*(pol-b)*(pol-c));
	cout << "Периметр треугольника: " << P << endl;
	cout << "Площадь треугольника: " << S << endl;
	return 0;
}
