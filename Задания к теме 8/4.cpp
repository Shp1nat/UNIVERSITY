#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите двузначное число: ";
	cin >> a;
	if ((a > 99) || (a < 10))
	{

		cout << "Это не двузначное число";
	}
	else
	{
		b = a / 10;
		a = a % 10;
		a = 10 * a + b;
		cout << "Перестановка цифр двузначного числа: " << a;
	}
	return 0;
}