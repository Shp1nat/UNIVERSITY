#include <iostream>
using namespace std;

int main()
{
	double x1, y1, x2, y2, otvet;
	setlocale(LC_ALL, "Russian");
	cout << "Введите первую координату X первой точки: " << endl;
	cin >> x1;
	cout << "Введите вторую координату Y первой точки: " << endl;
	cin >> y1;
	cout << "Введите первую координату X второй точки: " << endl;
	cin >> x2;
	cout << "Введите вторую координату Y второй точки: " << endl;
	cin >> y2;
	otvet = sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));
	cout << "Расстояние между точками равно: " << otvet;
	return 0;
}