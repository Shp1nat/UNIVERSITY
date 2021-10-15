#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	b = 0;
	cout << "Введите размер файла в байтах: ";
	cin >> a;
	b = a / 1024;
	cout <<  "Количество полных килобайтов, которые занимает данный файл: " << b;
	return 0;
}