#include <iostream>
using namespace std;
string R(string a, int b)
{
	string f;
	if (b == 0) f = a;

	if (b == 1)
	{
		if (a == "N") f = "W";
		if (a == "W") f = "S";
		if (a == "S") f = "E";
		if (a == "E") f = "N";
	}

	if (b == -1)
	{
		if (a == "N") f = "E";
		if (a == "W") f = "N";
		if (a == "S") f = "W";
		if (a == "E") f = "S";
	}

	string R = f;
	return R;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	string a;
	int b;
	cout << "Введите исходное направление робота (N, W, S, E): ";
	cin >> a;
	cout << "Введите одну из трёх цифровых команд (0, 1, -1): ";
	cin >> b;

	if (((a == "N") || (a == "W") || (a == "S") || (a == "E")) && ((b == 0) || (b == 1) || (b == -1)))
		cout << "После выполнения цифровой команды робот будет иметь направление: " << R(a, b);
	else
		cout << "Как минимум одна из переменных введена неправильно";
	return 0;
}