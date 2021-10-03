#include <iostream>
#define P 3.14
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a1,a2,b1,b2,c1,c2,x,y;
    x = 0;
    y = 0; 
    cout << "A1*x+B1*y=C1" << endl;
    cout << "A2*x+B2*y=C2" << endl;
    cout << "Введите коэффициент A1: ";
    cin >> a1;
    cout << "Введите коэффициент A2: ";
    cin >> a2;
    cout << "Введите коэффициент B1: ";
    cin >> b1;
    cout << "Введите коэффициент B2: ";
    cin >> b2;
    cout << "Введите коэффициент C1: ";
    cin >> c1;
    cout << "Введите коэффициент C2: ";
    cin >> c2;
    y = (c2 * a1 - a2 * c1) / (a1 * b2 - b1 * a2);
    x = (c1 - b1 * y) / a1;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}