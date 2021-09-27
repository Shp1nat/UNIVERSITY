#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	double x1, y1, x2, y2, P, S, dl, sh;
	setlocale(LC_ALL, "Russian");
	cout << "Введите координату X первой точки прямоугольника: ";
	cin >> x1;
	cout << "Введите координату Y первой точки прямоугольника: ";
	cin >> y1;
	cout << "Введите координату X второй точки прямоугольника: ";
	cin >> x2;
	cout << "Введите координату Y второй точки прямоугольника: ";
	cin >> y2;
	cout << " " << endl;
	dl = abs(x1 - x2);
	sh = abs(y1 - y2);
	P = 2 * (sh + dl);
	S = sh * dl;
	cout << "Периметр прямоугольника " << P << endl;
	cout << "Площадь прямоугольника: " << S << endl;
	return 0;
}
