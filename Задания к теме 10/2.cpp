#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите целое число A: ";
	cin >> a;
	cout << "Введите целое число B: ";
	cin >> b;
	cout << "Введите целое число C: ";
	cin >> c;
	if ((a < b) && (b < c))
	{
		cout << "Высказывание 'Справедливо двойное неравенство A < B < C' является истиной";
	}
	else
	{
		cout << "Высказывание 'Справедливо двойное неравенство A < B < C' является ложью";
	}
	return 0;
}