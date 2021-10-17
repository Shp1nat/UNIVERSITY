#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите целое количество секунд, прошедших с начала суток: ";
	cin >> a;
	if (a < 0)
	{

		cout << "Количество секунд не может быть отрицательным";
	}
	else
	{
		a = a % 60;
		cout << "Количество секунд, прошедших с начала последней минуты: " << a;
	}
	return 0;
}