#include <iostream>
using namespace std;
double Fact2(int N)
{
	if (N % 2 == 0)
	{
		double sum = 1;
		for (int i = 2; i <= N; i = i + 2)
		{
			sum = sum * i;
		}
		return sum;
	}
	else
	{
		double sum = 1;
		for (int i = 1; i <= N; i = i + 2)
		{
			sum = sum * i;
		}
		return sum;
	}		
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	cout << "Введите целое число N (N > 0): ";
	cin >> N;
	if (N <= 0)
		cout << "Значение не удовлетворяет условию N > 0";
	else
		cout << "Двойной факториал N!! = " << Fact2(N);
	return 0;
}