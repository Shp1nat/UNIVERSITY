#include <iostream>
using namespace std;
string R(int a)
{
	string des,ed,sot;
	int c = a;
	c = a / 100;
	a = a % 100;
	switch (c)
	{
	case 1: sot = "сто ";
		break;
	case 2: sot = "двести ";
		break;
	case 3: sot = "триста ";
		break;
	case 4: sot = "четыреста ";
		break;
	case 5: sot = "пятьсот ";
		break;
	case 6: sot = "шестьсот ";
		break;
	case 7: sot = "семьсот ";
		break;
	case 8: sot = "восемьсот ";
		break;
	case 9: sot = "девятьсот ";
		break;
	}
	if ((a > 19) || (a < 10))
	{
		int b = a;
		b = b % 10;
		a = a / 10;
		switch (a)
		{
		case 0: des = "";
			break;
		case 2: des = "двадцать";
			break;
		case 3: des = "тридцать";
			break;
		case 4: des = "сорок";
			break;
		case 5: des = "пятьдесят";
			break;
		case 6: des = "шестьдесят";
			break;
		case 7: des = "семьдесят";
			break;
		case 8: des = "восемьдесят";
			break;
		case 9: des = "девяносто";
			break;
		}
		switch (b)
		{
		case 0: ed = "";
			break;
		case 1: ed = " один";
			break;
		case 2: ed = " два";
			break;
		case 3: ed = " три";
			break;
		case 4: ed = " четыре";
			break;
		case 5: ed = " пять";
			break;
		case 6: ed = " шесть";
			break;
		case 7: ed = " семь";
			break;
		case 8: ed = " восемь";
			break;
		case 9: ed = " девять";
			break;
		}
	}
	else 
	{
		switch (a)
		{
		case 11: des = "одиннадцать"; ed = "";
			break;
		case 12: des = "двенадцать"; ed = "";
			break;
		case 13: des = "тринадцать"; ed = "";
			break;
		case 14: des = "четырнадцать"; ed = "";
			break;
		case 15: des = "пятнадцать"; ed = "";
			break;
		case 16: des = "шестнадцать"; ed = "";
			break;
		case 17: des = "семнадцать"; ed = "";
			break;
		case 18: des = "восемнадцать"; ed = "";
			break;
		case 19: des = "девятнадцать"; ed = "";
			break;
		}
	}
	string R = sot+des+ed;
	return R;
}
int main()
{
	setlocale(LC_ALL, "Russian");

	int a;
	cout << "Введите целое число в диапазоне 100-999: ";
	cin >> a;

	if ((a < 100) || (a > 999)) cout << "Число не удовлетворяет диапазону";
	else cout << R(a);
	return 0;
}