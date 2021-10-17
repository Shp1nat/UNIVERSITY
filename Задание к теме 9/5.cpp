#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите год: ";
	cin >> a;
	if (a < 1) 
	{

		cout << "Год должен быть целым положительным числом";
	}
	else
	{
		a = (a - 1) / 100 + 1;
		cout << "Этот год является " << a << " столетием";
	}
	return 0;
}