#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите целое положительное число A: ";
	cin >> a;
	cout << "Введите целое положительное число B: ";
	cin >> b;
	if ((a < 1) || (b < 1))
		cout << "Как минимум одно из значений не удовлетворяет ограничению";
	else
	{
		while ((a != 0) && (b != 0))
		{
			if (a >> b) a = a % b;
			else b = b % a;
		}
		cout << "Наименьший общий делитель равен " << a + b;
	}
	return 0;
}