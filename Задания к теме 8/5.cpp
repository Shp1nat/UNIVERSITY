#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите трёхзначное число: ";
	cin >> a;
	if ((a > 999) || (a < 100))
	{
		cout << "Это не трёхзначное число";
	}
	else
	{
		b = a / 100;
		a = a % 100;
		a = a * 10 + b;
		cout << "Вычеркиваение первой цифры и приписование ее в конец числа: " << a;
	}
	return 0;
}