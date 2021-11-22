#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double s = 1000;
	int p, k = 0;
	cout << "Размер кредита 1000 руб" << endl << "Введите ежемесячный процент по кредиту (0 < P < 25): ";
	cin >> p;
	if ((p <= 0) || (p >= 25))
		cout << "Значение не удовлетворяет ограничениям";
	else
	{
		for (k = 0; s <= 1100; k++)
		{
			s = s + s * p / 100;
		}
		cout << "Размер кредита по такому проценту превысит 1100 рублей через " << k << " месяцев и составит " << s << " руб";
	}
	return 0;
}