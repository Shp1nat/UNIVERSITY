#include <iostream>
using namespace std;
int Sign(double X)
{
	if (X < 0) return -1;
	if (X == 0) return 0;
	if (X > 0) return 1;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double A, B;
	cout << "Введите число A: ";
	cin >> A;
	cout << "Введите число B: ";
	cin >> B;
	cout << "Sign(A) + Sign(B) = " << Sign(A) + Sign(B);
	return 0;
}