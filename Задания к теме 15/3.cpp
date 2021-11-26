#include <iostream>
using namespace std;
double RingS(double R1, double R2)
{
	return (3.14 * R1 * R1 -  3.14 * R2 * R2);
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double R1, R2;
	for (int i = 1; i <= 3; i++)
	{
		cout << "Введите R1 (R1 > R2): ";
		cin >> R1;
		cout << "Введите R2 (R1 > R2): ";
		cin >> R2;
		if (R1 <= R2)
			cout << "Значения не удовлетворяют условию R1 > R2";
		else
			cout << "Площадь кольца равна " << RingS(R1, R2) << endl;
	}
	
	return 0;
}