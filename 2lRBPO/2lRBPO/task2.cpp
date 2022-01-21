#include <iostream>
#include <math.h>
using namespace std;
double f(double x)
{
	double f;
	f = ((x + 2 / (sqrt(2 * x))) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * ((sqrt(x) - sqrt(2)) / (x + 2));
	return f;
}
void main()
{
	setlocale(LC_ALL, "ru");
	double x;
	cout.precision(4);
	x = 7;
cout << "Заданный x = " << x << "; " << endl;
	cout << "Значение функции при заданном x: f = " << f(x) << "; " << endl;
	cout << "Введите х:";
	cin >> x;
	cout << "Значение функции при введённом x: f = " << f(x) << "; " << endl;
}
