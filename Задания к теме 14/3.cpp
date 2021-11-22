#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, k = 0, s = 0, m = 1;
	cout << "Введите целое число N (N > 1): ";
	cin >> n;
	if (n <= 1)
		cout << "Значение не удовлетворяет условию";
	else
	{
		for (k = 0; s < n; k++)
		{
			s = s + m;
			m++;
		}
		cout << "Наименьшее целое число K, для которого сумма 1 + 2 + ... + K будет больше или равна N: " << k << endl;
		cout << "Сумма будет равна: " << s;
	}
	return 0;
}