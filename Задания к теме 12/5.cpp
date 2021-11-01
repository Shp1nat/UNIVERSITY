#include <iostream>
using namespace std;
string R(int a)
{
	string col, an;
	a = a % 60;
	int b = a / 12;
	int c = a % 12;
	switch (b)
	{
	case 0: col = "зелёной ";
		break;
	case 1: col = "красной ";
		break;
	case 2: col = "жёлтой ";
		break;
	case 3: col = "белой ";
		break;
	case 4: col = "чёрной ";
		break;
	}
	switch (c)
	{
	case 0: an = "крысы";
		break;
	case 1: an = "коровы";
		break;
	case 2: an = "тигра";
		break;
	case 3: an = "зайца";
		break;
	case 4: an = "дракона";
		break;
	case 5: an = "змеи";
		break;
	case 6: an = "лошади";
		break;
	case 7: an = "овцы";
		break;
	case 8: an = "обезьяны";
		break;
	case 9: an = "курицы";
		break;
	case 10: an = "собаки";
		break;
	case 11: an = "свиньи";
		break;
	}

	string R = "год " + col + an;
	return R;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите номер года : ";
	cin >> a;
	if (a < 4)
	{
		if (a == 3) cout << "год чёрной свиньи";
		if (a == 2) cout << "год чёрной собаки";
		if (a == 1) cout << "год чёрной курицы";
		if (a == 0) cout << "год чёрной обезьяны";
	}
	else
	{
		a = a - 4;
		cout << R(a);
	}
	return 0;
}