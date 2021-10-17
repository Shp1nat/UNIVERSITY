#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a,b;
	cout << "Введите целое число A: ";
	cin >> a;
	b = a % 2;
	if ((a > 9) && (a < 100) && (b == 0))
	{
		cout << "Высказывание 'Данное число является четным двузначным' является истиной";
	}
	else
	{
		cout << "Высказывание 'Данное число является четным двузначным' является ложью";
	}
	return 0;
}