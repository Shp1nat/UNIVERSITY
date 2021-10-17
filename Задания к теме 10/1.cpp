#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите целое число A: ";
	cin >> a;
	cout << "Введите целое число A: ";
	cin >> b;
	if ((a > 2) && (b <= 3))
	{
		cout << "Высказывание 'Справедливы неравенства A > 2 и B <= 3' является истиной";
	}
	else
	{
		cout << "Высказывание 'Справедливы неравенства A > 2 и B <= 3' является ложью";
	}
	return 0;
}