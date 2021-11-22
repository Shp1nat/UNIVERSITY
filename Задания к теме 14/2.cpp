#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, i = 0;
	cout << "Введите целое положительное число A (A > B): ";
	cin >> a;
	cout << "Введите целое положительное число B (A > B): ";
	cin >> b;
	if ((a <= b) || (a < 1) || (b < 1))
		cout << "Введите значения, удовлетворяющие условию";
	else
	{
		i = a;
		for (b; b <= a; a = a - b)
		{
			i = i - b;
		}
		cout << "Длина незанятой части отрезка: " << i;
	}
	return 0;
}