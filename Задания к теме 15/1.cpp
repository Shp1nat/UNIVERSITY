#include <iostream>
using namespace std;
double PowerA3(double A, double B)
{
	return B = A * A * A;
}
int main()
{
	int i = 1;
	double A, B = 0;
	setlocale(LC_ALL, "Russian");
	for (i; i <= 5; i++)
	{
		cout << "Введите число: ";
		cin >> A;
		cout << "Третья степень числа равна " << PowerA3(A, B) << endl;
	}
	return 0;
}