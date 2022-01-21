#include <iostream>
#include <math.h>
using namespace std;
void f(const double& x, double& f);
void main()
{
	setlocale(LC_ALL, "Russian");
	double x, F;
	cout.precision(4);
	x = 7;
	f(x, F);
	cout << "Заданный x = " << x << "; " << endl;
	cout << "Значение функции при заданном x: f = " << F << "; " << endl;
	cout << "Введите х:";
	cin >> x;
	f(x, F);
	cout << "Значение функции при введённом x: f = " << F << "; " << endl;

	cout << "Заданный x = " << x << "; " << endl;
	cout << "Значение функции при заданном x: f = " << f(x) << "; " << endl;
	cout << "Введите х:";
	cin >> x;
	cout << "Значение функции при введённом x: f = " << f(x) << "; " << endl;
}
void f(const double& x, double& f)
{
	f = ((x + 2 / (sqrt(2 * x))) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * ((sqrt(x) - sqrt(2)) / (x + 2));
}
