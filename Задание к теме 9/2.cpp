#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите целое число, лежащее в диапазоне 1–365: ";
	cin >> a;
	if ((a < 1) || (a>365))
	{

		cout << "Число не удовлетворяет диапазону 1-365";
	}
	else
	{
		a = a % 7;
		cout << "Номер дня недели для этого дня года: " << a;
	}
	return 0;
}