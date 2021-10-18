#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
    int x;
    cout << "Введите целое число: ";
    cin >> x;
    if (x == 0)
    {
	    cout << "Это нулевое число";
    }
    else
    {
	    if (x > 0)
	    {
		    if (x % 2 == 0)
		    {
			    cout << "Это положительное чётное число";
		    }
		    else
		    {
			    cout << "Это положительное нечётное число";
		    }
	    }
	    else
	    {
		    if (x % 2 == 0)
		    {
			    cout << "Это отрицательное чётное число";
		    }
		    else
		    {
			    cout << "Это отрицательное нечётное число";
		    }
	    }
    }
return 0;
}