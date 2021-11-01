#include <iostream>
using namespace std;
string R(int b)
{
	string f;
	string p = " учебных задания";
	string a = " учебное задание";
	string c = " учебных заданий";
	string od = " одно";
	string dv = " два";
	string tr = " три";
	string ch = " четыре";
	string py = " пять";
	string sh = " шесть";
	string se = " семь";
	string vo = " восемь";
	string de = " девять";
	string d = "двадцать";
	string e = "тридцать";
	switch (b)
	{
	case 10: f = "десять" + c;
		break;
	case 11: f = "одиннадцать" + c;
		break;
	case 12: f = "двенадцать" + c;
		break;
	case 13: f = "тринадцать" + c;
		break;
	case 14: f = "четырнадцать" + c;
		break;
	case 15: f = "пятнадцать" + c;
		break;
	case 16: f = "шестнадцать" + c;
		break;
	case 17: f = "семнадцать" + c;
		break;
	case 18: f = "восемнадцать" + c;
		break;
	case 19: f = "девятнадцать" + c;
		break;
	case 20: f = d + c;
		break;
	case 21: f = d + od + a;
		break;
	case 22: f = d + dv + p;
		break;
	case 23: f = d + tr + p;
		break;
	case 24: f = d + ch + p;
		break;
	case 25: f = d + py + c;
		break;
	case 26: f = d + sh + c;
		break;
	case 27: f = d + se + c;
		break;
	case 28: f = d + vo + c;
		break;
	case 29: f = d + de + c;
		break;
	case 30: f = e + c;
		break;
	case 31: f = e + od + a;
		break;
	case 32: f = e + dv + p;
		break;
	case 33: f = e + tr + p;
		break;
	case 34: f = e + ch + p;
		break;
	case 35: f = e + py + c;
		break;
	case 36: f = e + sh + c;
        break;
	case 37: f = e + se + c;
		break;
	case 38: f = e + vo + c;
		break;
	case 39: f = e + de + c;
		break;
	case 40: f = "сорок" + c;
		break;

	}

	string R = f;
	return R;
}
int main()
{
	setlocale(LC_ALL, "Russian");

	int b;
	cout << "Введите целое число в диапазоне 10-40: ";
	cin >> b;

	if ((b < 10) || (b > 40)) cout << "Число не удовлетворяет диапазону";
	else cout << R(b);
	return 0;
}