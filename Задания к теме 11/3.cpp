#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double ax, ay, bx, by, cx, cy, xab, yab, xac, yac, sab, sac;
	cout << "Введите координату X переменной A: ";
	cin >> ax;
	cout << "Введите координату Y переменной A: ";
	cin >> ay;
	cout << "Введите координату X переменной B: ";
	cin >> bx;
	cout << "Введите координату Y переменной B: ";
	cin >> by;
	cout << "Введите координату X переменной C: ";
	cin >> cx;
	cout << "Введите координату Y переменной C: ";
	cin >> cy;
	xab = abs(ax - bx);
	yab = abs(ay - by);
	sab = sqrt(pow(xab, 2) + pow(yab, 2));
	xac = abs(ax - cx);
	yac = abs(ay - cy);
	sac = sqrt(pow(xac, 2) + pow(yac, 2));
	if (sab < sac)
	{
		cout << "Точка B расположена ближе к точке A, чем точка C, а расстояние между ними равно: " << sab;
	}
	else
	{
		cout << "Точка C расположена ближе к точке A, чем точка B, а расстояние между ними равно: " << sac;
	}	
	return 0;
}